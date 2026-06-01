# -*- coding: utf-8 -*-
import matplotlib.pyplot as plt
from torchvision import datasets, transforms

# 加载数据（这次不会重新下载，而是直接读取本地文件）
dataset = datasets.MNIST(root='./data', train=True, download=False)

# 获取第一张图片和它的标签
image, label = dataset[0]

print(f"图片尺寸: {image.size}") # 应该是 (28, 28)
print(f"图片标签: {label}")      # 应该是 0-9 之间的数字

# 显示图片
plt.imshow(image, cmap='gray')
plt.title(f"Label: {label}")
plt.show()