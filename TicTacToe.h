#include <iostream>
#include "Board.h"

class TicTacToe
{
private:
    Board fBoard;
    bool fGameOver;

public:
    TicTacToe();
    void RunGame();
};