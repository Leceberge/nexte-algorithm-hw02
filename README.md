# NEXT‑E算法组第二次作业
> 姓名：王旭东
> 学号：3262241032

## 项目简介
本项目为NEXT‑E算法组第二次培训作业，使用Git+CMake管理C++算法项目。
一共三道独立算法程序，每个程序拥有独立main函数，可以单独编译运行。

### 目录结构
nexte‑algorithm‑hw02/
├─ README.md               # 项目说明文档
├─ .gitignore              # 忽略 build 编译目录
├─ CMakeLists.txt          # CMake 配置，C++17 标准
├─ commands.txt            # Git 与编译命令记录
├─ src/
│   ├─ streak.cpp          # 题 1：最长连续命中
│   ├─ unique_ids.cpp      # 题 2：目标编号整理，去重排序
│   └─ range_sum.cpp       # 题 3：区间前缀和求和
└─ tests/                  # 测试用例与测试报告

## 运行环境
- Ubuntu
- C++17
- CMake >= 3.16

## 构建运行步骤
```bash
# 克隆仓库，替换为自己仓库地址
git clone https://github.com/Leceberge/nexte-algorithm-hw02.git
cd nexte-algorithm-hw02

# CMake构建
cmake -S . -B build
cmake --build build

# 运行程序，从测试文件读入数据
./build/streak < tests/case1.txt
./build/unique_ids < tests/case1.txt
./build/range_sum < tests/case1.txt
说明：编写过程借助 AI 辅助，所有代码已经阅读、理解并自测验证。
