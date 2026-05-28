#include "bullet.h"

Bullet::Bullet(float x, float y, int damage)
    : m_x(x),
      m_y(y),
      m_speed(5.0f),
      m_damage(damage),
      m_alive(true),
      m_maxX(800.0f)
{
}

Bullet::~Bullet()
{
}

void Bullet::update()
{
    if (!m_alive) {
        return;
    }

    move();

    // 检查是否超出范围
    if (m_x > m_maxX) {
        m_alive = false;
    }
}

void Bullet::move()
{
    m_x += m_speed;
}

QRect Bullet::getRect() const
{
    int x = static_cast<int>(m_x);
    int y = static_cast<int>(m_y);
    return QRect(x, y, 8, 8);
}
