# -*- coding: utf-8 -*-
class TextProcessor:
    """文本后处理：排版优化、代码格式保留等"""

    @staticmethod
    def smart_format(texts, mode='auto'):
        """智能排版"""
        if not texts:
            return ""

        if mode == 'code':
            return TextProcessor._format_code(texts)
        elif mode == 'plain':
            return '\n'.join(texts)
        else:
            return TextProcessor._auto_format(texts)

    @staticmethod
    def _auto_format(texts):
        """自动识别并格式化"""
        # 检测是否是代码
        code_keywords = ['def ', 'class ', 'import ', 'return ', 'function', 'print']
        is_code = any(any(kw in text for kw in code_keywords) for text in texts)

        if is_code:
            return TextProcessor._format_code(texts)

        # 普通文本
        result = []
        for text in texts:
            text = text.strip()
            if text:
                result.append(text)
        return '\n'.join(result)

    @staticmethod
    def _format_code(texts):
        """保留代码缩进格式"""
        processed = []
        for text in texts:
            leading_spaces = len(text) - len(text.lstrip(' '))
            indent_level = leading_spaces // 4
            indent = '    ' * indent_level
            content = text.strip()
            if content:
                processed.append(indent + content)
        return '\n'.join(processed)