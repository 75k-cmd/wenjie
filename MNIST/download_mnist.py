# -*- coding: utf-8 -*-
import torch
from torchvision import datasets, transforms

# 定义数据预处理（将图片转为 Tensor）
transform = transforms.Compose([
    transforms.ToTensor(),
    transforms.Normalize((0.1307,), (0.3081,)) # MNIST 的均值和标准差
])

# download=True 是关键参数，它会自动触发下载
train_dataset = datasets.MNIST(
    root='./data',      # 数据存储路径
    train=True,         # 加载训练集
    download=True,      # 如果本地没有则自动下载
    transform=transform
)

test_dataset = datasets.MNIST(
    root='./data',
    train=False,        # 加载测试集
    download=True,
    transform=transform
)

print(f"训练集大小: {len(train_dataset)}")
print(f"测试集大小: {len(test_dataset)}")
print("MNIST 数据集已准备就绪！")