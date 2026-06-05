import tkinter as tk
from PIL import ImageGrab


class ScreenshotTool:
    """截图工具 - 正确使用Canvas"""

    @staticmethod
    def capture():
        # 创建全屏窗口
        root = tk.Tk()
        root.attributes('-fullscreen', True)
        root.attributes('-alpha', 0.3)
        root.configure(bg='black')

        # 创建Canvas画布（用于绘制矩形）
        canvas = tk.Canvas(root, highlightthickness=0)
        canvas.pack(fill=tk.BOTH, expand=True)

        # 存储坐标
        start_x = None
        start_y = None
        rect = None
        result_path = None

        def on_press(e):
            nonlocal start_x, start_y, rect
            start_x = canvas.canvasx(e.x)
            start_y = canvas.canvasy(e.y)
            if rect:
                canvas.delete(rect)
                rect = None

        def on_drag(e):
            nonlocal rect
            if start_x is not None:
                if rect:
                    canvas.delete(rect)
                # 在Canvas上绘制矩形
                rect = canvas.create_rectangle(
                    start_x, start_y, canvas.canvasx(e.x), canvas.canvasy(e.y),
                    outline='red', width=3, fill=''
                )

        def on_release(e):
            nonlocal result_path
            if start_x is not None:
                end_x = canvas.canvasx(e.x)
                end_y = canvas.canvasy(e.y)

                # 计算截图区域
                x1 = min(start_x, end_x)
                y1 = min(start_y, end_y)
                x2 = max(start_x, end_x)
                y2 = max(start_y, end_y)

                if x2 > x1 and y2 > y1:
                    img = ImageGrab.grab(bbox=(x1, y1, x2, y2))
                    result_path = 'temp_screenshot.png'
                    img.save(result_path)

            # 只关闭截图窗口，不影响主程序
            root.destroy()  # 用 destroy 而不是 quit

        def on_cancel(e):
            root.quit()
            root.destroy()

        # 绑定事件到Canvas
        canvas.bind('<Button-1>', on_press)
        canvas.bind('<B1-Motion>', on_drag)
        canvas.bind('<ButtonRelease-1>', on_release)
        root.bind('<Escape>', on_cancel)

        # 运行
        root.mainloop()

        # 清理
        try:
            root.destroy()
        except:
            pass

        return result_path
