#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
    fGameOver = false;
}

void TicTacToe::RunGame()
{
    char lWinner;
    while(!fGameOver)
    {
        //variables used for declaring placement
        
        int lX, lY;
        bool lMoveSuccess = true;
        char * lPlayers = "XO";

        for(size_t i = 0; i < 2; i++)
        {
            do
            {
                system("clear"); //windows user change to cls
                if(!lMoveSuccess)
                {
                    std::cout << "Please choose a valid move!" << std::endl;
                }

                std::cout << "Player " << i+1 << " ( " << lPlayers[i] << " ) - Pick your position:" << std::endl;
                fBoard.outputBoard();
                std::cout << "Pick X-position:";
                std::cin >> lX;
                std::cout << "Pick Y-position:";
                std::cin >> lY;

                if(!fBoard.PlayerMove(lPlayers[i], lX, lY))
                    lMoveSuccess = false;
                else
                    lMoveSuccess = true;

                    
            } while(!lMoveSuccess);

            if(fBoard.CheckVictory(lPlayers[i])) 
            {
                fGameOver = true;
                lWinner = lPlayers[i];
                break;
            }
        }

        system("clear"); //windows user change to cls
        std::cout << std::endl;
        std::cout << "Player ( " << lWinner << " ) - is the Winner!!!" << std::endl;
        fBoard.outputBoard();
    }


}