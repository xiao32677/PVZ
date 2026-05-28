#ifndef NORMALZOMBIE_H
#define NORMALZOMBIE_H

#include "../zombie.h"

class NormalZombie : public Zombie
{
public:
    NormalZombie(int row, float x = 800);
    ~NormalZombie();

    void update() override;
    void move() override;

private:
    int m_moveCounter;
};

#endif // NORMALZOMBIE_H
