
import tkinter as tk
from tkinter import ttk, scrolledtext, filedialog
import threading
import sys
import os

# 添加父目录到路径
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from core.ocr_engine import OCREngine
from core.screenshot import ScreenshotTool
from core.text_processor import TextProcessor
import pyperclip


class MainWindow:
    def __init__(self):
        self.root = tk.Tk()
        self.root.title("Snap2Text - 智能OCR助手")
        self.root.geometry("800x600")
        self.ocr = OCREngine()
        self.setup_ui()

    def setup_ui(self):
        # 按钮区域
        btn_frame = tk.Frame(self.root)
        btn_frame.pack(pady=10)

        tk.Button(btn_frame, text="截图识别", command=self.screenshot_ocr,
                  width=12, height=2, bg='#4CAF50', fg='white').pack(side=tk.LEFT, padx=5)
        tk.Button(btn_frame, text="选择图片", command=self.select_image,
                  width=12, height=2).pack(side=tk.LEFT, padx=5)
        tk.Button(btn_frame, text="清空", command=self.clear_text,
                  width=8, height=2).pack(side=tk.LEFT, padx=5)

        # 处理模式选择
        mode_frame = tk.Frame(self.root)
        mode_frame.pack(pady=5)
        tk.Label(mode_frame, text="排版模式：").pack(side=tk.LEFT)
        self.mode_var = tk.StringVar(value="auto")
        tk.Radiobutton(mode_frame, text="自动", variable=self.mode_var,
                       value="auto").pack(side=tk.LEFT, padx=5)
        tk.Radiobutton(mode_frame, text="代码", variable=self.mode_var,
                       value="code").pack(side=tk.LEFT, padx=5)
        tk.Radiobutton(mode_frame, text="普通", variable=self.mode_var,
                       value="plain").pack(side=tk.LEFT, padx=5)

        # 结果显示区域
        self.text_area = scrolledtext.ScrolledText(self.root, wrap=tk.WORD,
                                                   font=('微软雅黑', 11))
        self.text_area.pack(fill=tk.BOTH, expand=True, padx=10, pady=10)

        # 底部按钮
        bottom_frame = tk.Frame(self.root)
        bottom_frame.pack(pady=10)
        tk.Button(bottom_frame, text="复制结果", command=self.copy_text,
                  width=12).pack(side=tk.LEFT, padx=5)
        tk.Button(bottom_frame, text="保存文件", command=self.save_text,
                  width=12).pack(side=tk.LEFT, padx=5)

        # 状态栏
        self.status_var = tk.StringVar(value="就绪")
        tk.Label(self.root, textvariable=self.status_var, bd=1,
                 relief=tk.SUNKEN, anchor=tk.W).pack(fill=tk.X)

    def screenshot_ocr(self):
        """截图并识别"""
        # 禁用截图按钮，防止重复点击
        self.status_var.set("正在截图...")
        self.root.update()

        def task():
            try:
                img_path = ScreenshotTool.capture()
                if img_path and os.path.exists(img_path):
                    texts = self.ocr.recognize(img_path)
                    mode = self.mode_var.get()
                    result = TextProcessor.smart_format(texts, mode)
                    self.root.after(0, lambda: self.display_result(result))
                else:
                    self.root.after(0, lambda: self.status_var.set("截图取消或失败"))
            except Exception as e:
                print(f"错误: {e}")
                self.root.after(0, lambda: self.status_var.set(f"错误: {str(e)}"))

        # daemon=True 确保线程随主程序退出
        t = threading.Thread(target=task, daemon=True)
        t.start()

    def select_image(self):
        """选择图片文件"""
        path = filedialog.askopenfilename(
            filetypes=[("图片文件", "*.png *.jpg *.jpeg *.bmp")]
        )
        if path:
            self.status_var.set("正在识别...")
            texts = self.ocr.recognize(path)
            mode = self.mode_var.get()
            result = TextProcessor.smart_format(texts, mode)
            self.display_result(result)

    def display_result(self, text):
        """显示结果"""
        self.text_area.delete(1.0, tk.END)
        self.text_area.insert(1.0, text)
        lines = len(text.split('\n'))
        self.status_var.set(f"识别完成，共 {lines} 行")

    def copy_text(self):
        """复制到剪贴板"""
        text = self.text_area.get(1.0, tk.END).strip()
        if text:
            pyperclip.copy(text)
            self.status_var.set("已复制到剪贴板")

    def save_text(self):
        """保存到文件"""
        text = self.text_area.get(1.0, tk.END).strip()
        if text:
            path = filedialog.asksaveasfilename(defaultextension=".txt")
            if path:
                with open(path, 'w', encoding='utf-8') as f:
                    f.write(text)
                self.status_var.set(f"已保存到 {path}")

    def clear_text(self):
        self.text_area.delete(1.0, tk.END)
        self.status_var.set("已清空")

    def run(self):
        self.root.mainloop()