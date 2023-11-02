#include "C:\VM\cpp\PongGame\Header\Player.h"
using namespace std;

Player::Player(int posx, int posy)
{
    x0 = posx;
    y0 = posy;
    x = posx;
    y = posy;
    direction = STOP;
}

void Player::reset()
{
    x = x0;
    y = y0;
    direction = STOP;
}
void Player::changeDirection(eDir d)
{
    direction = d;
}
void Player::move()
{
    switch (direction)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case STOP:
        break;
    default:
        break;
    }
}
eDir Player::getDirection(){return direction;}
