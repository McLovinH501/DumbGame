enum eDirP
{
    STOP = 0,
    LEFT = 1,
    UPLEFT = 2,
    DOWNLEFT = 3,
    RIGHT = 4,
    UPRIGHT = 5,
    DOWNRIGHT = 6
};

class Pelota
{
private:
    int x, y;
    int x0, y0;
    eDirP direction;

public:
    Pelota(int posx, int posy);
    void reset();
    void changeDirection(eDirP d);
    void randomDirection();
    void move();
    int getX();
    int getY();
    eDirP getDirecion();
};

friend ostream &operator<<(ostream &o, Pelota p)
{
    o << "Pelota [" << p.x << ";" << p.y << "];[" << p.direction << "]";
}