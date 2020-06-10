
#include "TicTacToe.h"

int main() 
{
    // The Tic Tac Toe Game
    // Plan: 
    // The Game will be represented to the user like this:
    // #############
    // # X |   |   #
    // #-----------#
    // #   | 0 |   #
    // #-----------#
    // #   | X |   #
    // #############
    // Each player is placing a X or 0 respectively, each take a turn
    // A Player wins if they get 3 of their piece in a row horizontally or vertically

    // Classes
    // TicTacToe - responsible for holding Board object and controlling game
    // Board - holds state for playing board and changings values depending on player input


    TicTacToe ttt;

    ttt.RunGame();
    
    
}