
#include "Board.h"

Board::Board() 
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            fBoard[i][j] = ' ';
        }
    }
}

bool Board::PlayerMove(char aPlayer, int aX, int aY)
{
    if(aX <= 3 || aY <= 3)
        if(fBoard[aX][aY] == ' ')
        {
            fBoard[aX][aY] = aPlayer;
            return true;
        }
            

    return false;
}

bool Board::CheckVictory(char aPlayer)
{
    bool result = false;

    //Check Column
    if(!result)
    {
        for(size_t i = 0; i < 3; i++)
        {
            if(fBoard[i][0] == aPlayer && fBoard[i][1] == aPlayer &&
                fBoard[i][2] == aPlayer)
            {
                result = true;
                break;
            }
        }
    }

    //Check Rows
    if(!result)
    {
        for(size_t i = 0; i < 3; i++)
        {
            if(fBoard[0][i] == aPlayer && fBoard[1][i] == aPlayer &&
                fBoard[2][i] == aPlayer)
            {
                result = true;
                break;
            }
        }
    }

    //Check Diagonals
    if(!result)
    {
        if(fBoard[0][0] == aPlayer && fBoard[1][1] == aPlayer &&
            fBoard[2][2] == aPlayer)
        {
            result = true;
        }
    }
        if(!result)
    {
        if(fBoard[0][2] == aPlayer && fBoard[1][1] == aPlayer &&
            fBoard[2][0] == aPlayer)
        {
            result = true;
        }
    }

    return result;
}

void Board::outputBoard()
{
    //outputs the current state of the board
    std::cout << std::endl;
    std::cout << "#############" << std::endl;
    std::cout << "# " << fBoard[0][0] << " | " << fBoard[0][1] << " | " << fBoard[0][2] << " #" << std::endl;
    std::cout << "#-----------#" << std::endl;
    std::cout << "# " << fBoard[1][0] << " | " << fBoard[1][1] << " | " << fBoard[1][2] << " #" << std::endl;
    std::cout << "#-----------#" << std::endl;
    std::cout << "# " << fBoard[2][0] << " | " << fBoard[2][1] << " | " << fBoard[2][2] << " #" << std::endl;
    std::cout << "#############" << std::endl;
    std::cout << std::endl;
}