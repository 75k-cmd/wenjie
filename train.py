# -*- coding: utf-8 -*-
import torch
import torch.nn as nn
import torch.optim as optim
from torchvision import datasets, transforms
from torch.utils.data import DataLoader

# ================== 1. 配置超参数 ==================
BATCH_SIZE = 64       # 每次喂给模型多少张图
EPOCHS = 5            # 训练多少轮 (5轮通常就能达到98%以上)
LEARNING_RATE = 0.001 # 学习率
DEVICE = torch.device("cuda" if torch.cuda.is_available() else "cpu") # 自动检测显卡
print(f"正在使用设备: {DEVICE}")

# ================== 2. 加载数据 ==================
transform = transforms.Compose([
    transforms.ToTensor(),              # 转为张量
    transforms.Normalize((0.1307,), (0.3081,)) # 标准化处理
])

train_dataset = datasets.MNIST('./data', train=True, download=False, transform=transform)
test_dataset = datasets.MNIST('./data', train=False, transform=transform)

train_loader = DataLoader(train_dataset, batch_size=BATCH_SIZE, shuffle=True)
test_loader = DataLoader(test_dataset, batch_size=BATCH_SIZE, shuffle=False)

# ================== 3. 定义模型 (CNN) ==================
class SimpleCNN(nn.Module):
    def __init__(self):
        super(SimpleCNN, self).__init__()
        # 卷积层：提取特征
        self.conv1 = nn.Conv2d(1, 32, kernel_size=3, padding=1) # 输入1通道，输出32通道
        self.conv2 = nn.Conv2d(32, 64, kernel_size=3, padding=1)
        # 池化层：缩小尺寸
        self.pool = nn.MaxPool2d(2, 2)
        # 全连接层：分类
        self.fc1 = nn.Linear(64 * 7 * 7, 128)
        self.fc2 = nn.Linear(128, 10) # 输出10个类别 (0-9)
        self.relu = nn.ReLU()

    def forward(self, x):
        x = self.pool(self.relu(self.conv1(x))) # -> [Batch, 32, 14, 14]
        x = self.pool(self.relu(self.conv2(x))) # -> [Batch, 64, 7, 7]
        x = x.view(-1, 64 * 7 * 7)              # 展平
        x = self.relu(self.fc1(x))
        x = self.fc2(x)
        return x

model = SimpleCNN().to(DEVICE)
criterion = nn.CrossEntropyLoss() # 损失函数
optimizer = optim.Adam(model.parameters(), lr=LEARNING_RATE) # 优化器

# ================== 4. 训练循环 ==================
print("开始训练...")
for epoch in range(EPOCHS):
    model.train()
    running_loss = 0.0
    for images, labels in train_loader:
        images, labels = images.to(DEVICE), labels.to(DEVICE)

        optimizer.zero_grad()          # 清空梯度
        outputs = model(images)        # 前向传播
        loss = criterion(outputs, labels) # 计算误差
        loss.backward()                # 反向传播
        optimizer.step()               # 更新参数
        running_loss += loss.item()

    print(f"Epoch [{epoch+1}/{EPOCHS}], Loss: {running_loss/len(train_loader):.4f}")

# ================== 5. 测试准确率 ==================
print("开始测试...")
model.eval()
correct = 0
total = 0
with torch.no_grad():
    for images, labels in test_loader:
        images, labels = images.to(DEVICE), labels.to(DEVICE)
        outputs = model(images)
        _, predicted = torch.max(outputs.data, 1)
        total += labels.size(0)
        correct += (predicted == labels).sum().item()

accuracy = 100 * correct / total
print(f'🎉 最终测试集准确率: {accuracy:.2f}%')