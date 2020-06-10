#include <iostream>
#include <stdexcept>

class Board 
{
private:
    char fBoard[3][3];
public:
    Board();
    bool PlayerMove(char aPlayer, int aX, int aY);
    bool CheckVictory(char aPlayer, int aX, int aY);
    void outputBoard();
};