# -*- coding: utf-8 -*-
import os
from paddleocr import PaddleOCR


class OCREngine:
    """OCR引擎单例封装"""
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super().__new__(cls)
            cls._instance._init_engine()
        return cls._instance

    def _init_engine(self):
        print("正在初始化OCR引擎...")
        # 禁用GPU
        os.environ['CUDA_VISIBLE_DEVICES'] = '-1'

        # 旧版 PaddleOCR 2.7.3 的参数
        self.ocr = PaddleOCR(
            use_angle_cls=True,  # 启用角度分类
            lang='ch',  # 中文
            use_gpu=False,  # 使用CPU
            show_log=False  # 不显示日志
        )
        print("OCR引擎就绪")

    def recognize(self, image_path):
        """识别图片，返回文本列表"""
        result = self.ocr.ocr(image_path, cls=True)
        if not result or not result[0]:
            return []
        return [line[1][0] for line in result[0]]