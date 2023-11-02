enum eDir {
    STOP = 0,
    LEFT = 1,
    UPLEFT = 2,
    DOWNLEFT = 3,
    RIGHT = 4,
    UPRIGHT = 5,
    DOWNRIGHT = 6
};

class Player
{
private:
    int x0, y0;

protected:
    int x, y;
    eDir direction;

public:
    Player(int posx, int posy);
    void reset();
    void changeDirection(eDir d);
    void move();
    int getY();
    eDir getDirection();
};
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

friend ostream &operator<<(ostream &o, Player p)
{
    o << "Player [" << p.x << ";" << p.y << "];[" << p.direction << "]";
}