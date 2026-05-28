#ifndef CONSTANTS_H
#define CONSTANTS_H

// 游戏板参数
extern const int ROWS;           // 游戏板行数
extern const int COLS;           // 游戏板列数
extern const int CELL_WIDTH;     // 单元格宽度（像素）
extern const int CELL_HEIGHT;    // 单元格高度（像素）
extern const int GAME_WIDTH;     // 游戏窗口宽度
extern const int GAME_HEIGHT;    // 游戏窗口高度

// 游戏参数
extern const int GAME_FPS;       // 游戏帧率
extern const int FRAME_INTERVAL; // 帧间隔（毫秒）

// 资源参数
extern const int SUNLIGHT_BASE;  // 初始阳光
extern const int SUNLIGHT_GAIN;  // 每束阳光增加值

// 植物参数
extern const int PEASHOOTER_COST;
extern const int SUNFLOWER_COST;
extern const int WALLNUT_COST;
extern const int PEASHOOTER_HEALTH;
extern const int SUNFLOWER_HEALTH;
extern const int WALLNUT_HEALTH;
extern const int PEASHOOTER_DAMAGE;
extern const int PEASHOOTER_SHOOT_INTERVAL;

// 僵尸参数
extern const int NORMAL_ZOMBIE_HEALTH;
extern const int FLAG_ZOMBIE_HEALTH;
extern const int NORMAL_ZOMBIE_SPEED;
extern const int FLAG_ZOMBIE_SPEED;
extern const int NORMAL_ZOMBIE_DAMAGE;
extern const int FLAG_ZOMBIE_DAMAGE;

#endif // CONSTANTS_H
