#include "C:\VM\cpp\PongGame\Header\GameItems.h"
#include "GameItems.h"

GameItems::GameItems(int w, int h)
{
    width = w;
    height = h;
    
    scorePlayer1 = scorePlayer2 = 0;
     up1= 'w';
     up2= 'i';
     down1='z';
     down2='m';

    *pelota=new Pelota(w/2,h/2);
    *player1=new Player(1,h/2-3);
    *player2=new Player(w-2,h/2-3);
    
    quit = false;
}
GameItems::~GameItems()
{
    delete pelota,player1,player2;
}

void GameItems::setScore(Player *p)
{
    if(p==player1){
        scorePlayer1++;
    }
    if(p==player2){
        scorePlayer2++;
    }
    pelota->reset();
    player1->reset();
    player2->reset();
}

void GameItems::drawWindows(){

    system("cls");//pulisce lo schermo
    for (int y = 0; y < height ; y++)
    {
        for (int x = 0; x < width; i++)
        {
            int pelotax=pelota->getX();
            int pelotay=pelota->getY();

            
        }
        
    }
    


}
