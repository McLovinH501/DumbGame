#include <iostream>
#include "C:\VM\cpp\PongGame\Header\Pelota.h"
using namespace std;

Pelota::Pelota(int posx, int posy)
{

    x0 = posx;
    y0 = posy;
    x = posx;
    y = posy;
    direction = STOP;
}


void Pelota::reset()
{
    x = x0;
    y = y0;
    direction = STOP;
}

void Pelota::randomDirection()
{
    direction = (eDirP)((rand() % 6) + 1); // enum casting??
}

void Pelota::move()
{
    switch (direction)
    {

    case STOP:
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UPLEFT:
        x--;
        y++;
        break;
    case UPRIGHT:
        x++;
        y--;
        break;
    case DOWNLEFT:
        x--;
        y++;
        break;
    case DOWNRIGHT:
        x++;
        y++;
        break;
    default:
        break;
    }
}

void Pelota::changeDirection(eDirP d)
{
    direction = d;
}

// #include "Pelota.h"

// enum eDir{STOP=0,LEFT=1,UPLEFT=2,DOWNLEFT=3,RIGHT=4,UPRIGHT=5,DOWNRIGHT=6}
// class Pelota
// {
// private:
//     /* data */
// public:
//     Pelota(/* args */);
//     ~Pelota();
// };

// Pelota::Pelota(/* args */)
// {
// }

// Pelota::~Pelota()
// {
// }

// Pe::Pelota::Pelota()
// {
// }
