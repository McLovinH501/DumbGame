#include <iostream>
#include "C:\VM\cpp\PongGame\Header\Pelota.h"
#include "C:\VM\cpp\PongGame\Header\Player.h"
class GameItems
{
private:
    int width,height;
    int scorePlayer1,scorePlayer2;
    char up1,down1,up2,down2;
    Pelota *pelota=nullptr;
    Player *player1=nullptr;
    Player *player2=nullptr;
bool quit;
public:
    GameItems(int w, int h);
    ~GameItems();
    void setScore(Player *p);
    void drawWindows();
};
