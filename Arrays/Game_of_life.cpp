#include <iostream>
#include <vector>

using namespace std;

void gameOfLife(vector<vector<int>> &board)
{
    int row = board.size();
    int col = board[0].size();

    vector<vector<int>> copy(row + 2, vector<int>(col + 2, 0));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            copy[i + 1][j + 1] = board[i][j];
        }
    }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {

            int liveNeighbors = 0;

            liveNeighbors += copy[i - 1][j - 1];
            liveNeighbors += copy[i - 1][j];
            liveNeighbors += copy[i - 1][j + 1];
            liveNeighbors += copy[i][j - 1];
            liveNeighbors += copy[i][j + 1];
            liveNeighbors += copy[i + 1][j - 1];
            liveNeighbors += copy[i + 1][j];
            liveNeighbors += copy[i + 1][j + 1];

            if (copy[i][j] == 1)
            {
                if (liveNeighbors < 2 || liveNeighbors > 3)
                {
                    board[i - 1][j - 1] = 0;
                }
                else
                {
                    board[i - 1][j - 1] = 1;
                }
            }
            else
            {
                if (liveNeighbors == 3)
                {
                    board[i - 1][j - 1] = 1;
                }
                else
                {
                    board[i - 1][j - 1] = 0;
                }
            }
        }
    }
}

int main()
{
    return 0;
}