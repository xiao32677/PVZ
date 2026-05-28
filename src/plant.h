#ifndef PLANT_H
#define PLANT_H

#include <QRect>

class Plant
{
public:
    Plant(int row, int col);
    virtual ~Plant();

    // 生命周期
    virtual void update() = 0;
    virtual void attack() = 0;
    virtual void takeDamage(int damage);

    // 状态查询
    bool isAlive() const { return m_health > 0; }
    int getHealth() const { return m_health; }
    int getRow() const { return m_row; }
    int getCol() const { return m_col; }
    
    // 位置设置
    void setGridPos(int row, int col) {
        m_row = row;
        m_col = col;
    }

    QRect getRect() const;
    int getMaxHealth() const { return m_maxHealth; }

protected:
    int m_row;
    int m_col;
    int m_health;
    int m_maxHealth;
    int m_shootInterval;    // 发射间隔（毫秒）
    int m_shootCounter;     // 发射计数器
};

#endif // PLANT_H
