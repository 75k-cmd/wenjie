# -*- coding: utf-8 -*-
import matplotlib.pyplot as plt
from torchvision import datasets, transforms

# 加载数据
dataset = datasets.MNIST(root='./data', train=True, download=False)

# 创建一个画布，显示前 9 张图片
fig, axes = plt.subplots(3, 3, figsize=(6, 6))
for i, ax in enumerate(axes.flat):
    image, label = dataset[i]
    ax.imshow(image, cmap='gray')
    ax.set_title(f"Label: {label}")
    ax.axis('off') # 关闭坐标轴

plt.show()