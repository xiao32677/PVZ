#include "wallnut.h"
#include "../constants.h"

WallNut::WallNut(int row, int col)
    : Plant(row, col), m_damageCounter(0)
{
    m_health = WALLNUT_HEALTH;
    m_maxHealth = WALLNUT_HEALTH;
}

WallNut::~WallNut()
{
}

void WallNut::update()
{
    if (!isAlive()) {
        return;
    }
    // 坚果墙不需要执行特殊更新
}

void WallNut::attack()
{
    // 坚果墙不进行攻击
}

void WallNut::takeDamage(int damage)
{
    Plant::takeDamage(damage);
    m_damageCounter += damage;
}
