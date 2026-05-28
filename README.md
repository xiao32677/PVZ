# PVZ (Plants vs. Zombies) - Qt游戏实现

## 项目简介

这是一个使用Qt框架（C++）实现的《植物大战僵尸》游戏克隆版本。项目通过Qt的图形化界面库实现游戏逻辑、渲染和交互。

## 游戏概述

### 核心玩法
- **目标**：防守植物防线，阻止僵尸入侵
- **机制**：玩家通过种植不同的植物来防御僵尸
- **胜利条件**：清除所有僵尸
- **失败条件**：僵尸到达左侧边界

### 游戏元素
- **植物**：豌豆射手、向日葵、坚果墙等（防御或辅助单位）
- **僵尸**：普通僵尸、旗旗僵尸等（敌方单位）
- **资源**：阳光（用于种植植物）
- **游戏板**：5行×9列的网格

## 项目结构

```
PVZ/
├── CMakeLists.txt                 # CMake构建配置
├── README.md                       # 项目文档（本文件）
├── PVZ.pro                         # Qt Pro项目文件
├── src/
│   ├── main.cpp                    # 程序入口
│   ├── mainwindow.h                # 主窗口头文件
│   ├── mainwindow.cpp              # 主窗口实现
│   ├── gamewidget.h                # 游戏画布头文件
│   ├── gamewidget.cpp              # 游戏画布实现
│   ├── plant.h                     # 植物基类
│   ├── plant.cpp                   # 植物实现
│   ├── plants/
│   │   ├── peashooter.h            # 豌豆射手
│   │   ├── peashooter.cpp
│   │   ├── sunflower.h             # 向日葵
│   │   ├── sunflower.cpp
│   │   ├── wallnut.h               # 坚果墙
│   │   └── wallnut.cpp
│   ├── zombie.h                    # 僵尸基类
│   ├── zombie.cpp                  # 僵尸实现
│   ├── zombies/
│   │   ├── normalzombie.h          # 普通僵尸
│   │   ├── normalzombie.cpp
│   │   ├── flagzombie.h            # 旗旗僵尸
│   │   └── flagzombie.cpp
│   ├── bullet.h                    # 子弹类
│   ├── bullet.cpp
│   ├── gamemanager.h               # 游戏管理器
│   ├── gamemanager.cpp
│   ├── constants.h                 # 游戏常量定义
│   └── constants.cpp
├── resources/
│   ├── resources.qrc               # Qt资源文件
│   ├── images/
│   │   ├── plants/                 # 植物图片
│   │   │   ├── peashooter.png
│   │   │   ├── sunflower.png
│   │   │   └── wallnut.png
│   │   ├── zombies/                # 僵尸图片
│   │   │   ├── normalzombie.png
│   │   │   └── flagzombie.png
│   │   ├── bullets/                # 子弹图片
│   │   │   └── pea.png
│   │   ├── ui/                     # UI元素
│   │   │   ├── background.png
│   │   │   └── button.png
│   │   └── icons/                  # 图标
│   │       ├── peashooter_card.png
│   │       ├── sunflower_card.png
│   │       └── wallnut_card.png
│   ├── sounds/                     # 音效文件
│   │   ├── shoot.wav
│   │   ├── sunlight.wav
│   │   ├── plant.wav
│   │   └── zombie_death.wav
│   └── data/
│       └── gamedata.json           # 游戏数据配置
├── build/                          # 构建输出目录（Git忽略）
└── .gitignore                      # Git忽略文件

```

## 构建和运行

### 环境要求
- **Qt版本**：Qt 5.15+ 或 Qt 6.x
- **编译器**：GCC/Clang (Linux/Mac) 或 MSVC (Windows)
- **构建工具**：CMake 3.16+ 或 qmake

### 使用CMake构建（推荐）

```bash
# 创建构建目录
mkdir build
cd build

# 配置项目
cmake ..

# 编译
cmake --build .

# 运行
./PVZ  # Linux/Mac
# 或
PVZ.exe  # Windows
```

### 使用qmake构建

```bash
# 配置项目
qmake PVZ.pro

# 编译
make  # Linux/Mac
# 或
nmake  # Windows

# 运行
./PVZ  # Linux/Mac
```

## 开发步骤

### 第1步：项目基础设置
- [x] 创建GitHub仓库
- [ ] 配置CMakeLists.txt
- [ ] 配置PVZ.pro文件
- [ ] 创建基础项目结构

### 第2步：核心游戏框架
- [ ] 实现MainWindow（主窗口）
- [ ] 实现GameWidget（游戏画布/渲染层）
- [ ] 实现GameManager（游戏逻辑管理）
- [ ] 实现Constants（游戏常量）

### 第3步：基础单位系统
- [ ] 实现Plant基类（植物基类）
- [ ] 实现Zombie基类（僵尸基类）
- [ ] 实现Bullet类（子弹/攻击）

### 第4步：植物实现
- [ ] 实现PeaShooter（豌豆射手 - 攻击型植物）
- [ ] 实现Sunflower（向日葵 - 资源生产植物）
- [ ] 实现WallNut（坚果墙 - 防御型植物）

### 第5步：僵尸实现
- [ ] 实现NormalZombie（普通僵尸）
- [ ] 实现FlagZombie（旗旗僵尸 - 高级僵尸）

### 第6步：游戏逻辑
- [ ] 实现游戏循环
- [ ] 实现碰撞检测
- [ ] 实现阳光系统
- [ ] 实现波次生成系统
- [ ] 实现胜负判定

### 第7步：UI交互
- [ ] 实现植物卡牌系统
- [ ] 实现种植/选择植物界面
- [ ] 实现游戏状态显示（资源、波次、生命值）
- [ ] 实现暂停/开始/结束界面

### 第8步：资源加载和配置
- [ ] 整理游戏资源文件
- [ ] 创建资源配置文件（gamedata.json）
- [ ] 实现资源管理系统
- [ ] 集成音效系统

### 第9步：测试和优化
- [ ] 游戏功能测试
- [ ] 性能优化
- [ ] 修复bug

### 第10步：文档和发布
- [ ] 更新README和API文档
- [ ] 打包发布

## 类设计说明

### 核心类概览

| 类名 | 职责 | 关键方法 |
|------|------|---------|
| **MainWindow** | 主窗口容器 | init(), closeEvent() |
| **GameWidget** | 游戏渲染和事件处理 | paintEvent(), mousePressEvent(), timerEvent() |
| **GameManager** | 游戏逻辑核心 | update(), generateWave(), checkGameState() |
| **Plant** | 植物基类 | attack(), takeDamage(), update() |
| **PeaShooter** | 豌豆射手 | shoot() |
| **Sunflower** | 向日葵 | generateSunlight() |
| **WallNut** | 坚果墙 | takeDamage() |
| **Zombie** | 僵尸基类 | move(), takeDamage(), update() |
| **NormalZombie** | 普通僵尸 | - |
| **FlagZombie** | 旗旗僵尸 | - |
| **Bullet** | 子弹 | move(), checkCollision() |

## 游戏常量

| 常量 | 值 | 说明 |
|------|-----|------|
| ROWS | 5 | 游戏板行数 |
| COLS | 9 | 游戏板列数 |
| CELL_WIDTH | 80 | 单元格宽度（像素） |
| CELL_HEIGHT | 100 | 单元格高度（像素） |
| GAME_FPS | 60 | 游戏帧率 |
| SUNLIGHT_BASE | 100 | 初始阳光 |
| SUNLIGHT_GAIN | 50 | 每束阳光增加值 |

## 资源文件

项目使用以下资源素材：

### 植物图片
- `peashooter.png` - 豌豆射手
- `sunflower.png` - 向日葵
- `wallnut.png` - 坚果墙

### 僵尸图片
- `normalzombie.png` - 普通僵尸
- `flagzombie.png` - 旗旗僵尸

### UI/背景
- `background.png` - 游戏背景
- 植物卡牌图片

### 音效
- `shoot.wav` - 发射音效
- `plant.wav` - 种植音效
- `sunlight.wav` - 阳光收集音效
- `zombie_death.wav` - 僵尸死亡音效

## 依赖项

- **Qt Core** - 核心功能
- **Qt Gui** - 图形界面
- **Qt Widgets** - 窗口部件
- **Qt Multimedia** (可选) - 音效支持

## 编码规范

- **类名**：PascalCase (例：PeaShooter)
- **方法/变量**：camelCase (例：shootBullet, playerSunlight)
- **常量**：UPPER_SNAKE_CASE (例：CELL_WIDTH)
- **私有成员**：m_前缀 (例：m_health)

## 游戏流程

```
1. 初始化游戏 → 加载资源 → 创建UI
   ↓
2. 游戏循环 (每帧60次)
   ├─ 处理用户输入 (鼠标点击种植)
   ├─ 更新游戏状态 (植物、僵尸、子弹)
   ├─ 碰撞检测
   ├─ 生成新波次僵尸
   ├─ 渲染画面
   └─ 检查游戏状态 (胜/负/继续)
   ↓
3. 游戏结束 → 显示结果 → 可选重新开始
```

## 性能考虑

- 使用对象池模式管理子弹
- 优化碰撞检测算法
- 使用QTimer控制游戏帧率
- 懒加载资源

## 贡献指南

欢迎贡献代码！请遵循以下步骤：

1. Fork 本仓库
2. 创建特性分支 (`git checkout -b feature/AmazingFeature`)
3. 提交更改 (`git commit -m 'Add some AmazingFeature'`)
4. 推送到分支 (`git push origin feature/AmazingFeature`)
5. 开启 Pull Request

## 许可证

本项目采用 MIT 许可证。详见 LICENSE 文件。

## 参考资源

- [Qt官方文档](https://doc.qt.io/)
- [PVZ原始游戏](https://en.wikipedia.org/wiki/Plants_vs._Zombies)
- [游戏编程模式](https://gameprogrammingpatterns.com/)

## 常见问题 (FAQ)

### Q: 如何修改游戏难度？
A: 在 `constants.h` 中修改僵尸生成频率和生命值参数。

### Q: 如何添加新植物？
A: 创建新类继承 Plant，在 `gamemanager.cpp` 中注册。

### Q: 如何优化性能？
A: 使用 QDebug 分析瓶颈，考虑使用 QOpenGLWidget 替代标准绘制。

## 更新日志

### v0.1 (开发中)
- 项目初始化
- 基础框架搭建中

---

**最后更新**：2026-05-28  
**项目状态**：开发中 🚧
