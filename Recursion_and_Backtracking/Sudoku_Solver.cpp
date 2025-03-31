#include <bits/stdc++.h>
using namespace std;
bool safe(vector<vector<char>> &board, int r, int c, int val)
{
    int n = board.size();

    for (int i = 0; i < n; i++)
    {
        if (board[r][i] == '0' + val)
        {
            return false;
        }
        if (board[i][c] == '0' + val)
        {
            return false;
        }

        if (board[3 * (r / 3) + i / 3][3 * (c / 3) + i % 3] == '0' + val)
        {
            return false;
        }
    }

    return true;
}

bool solve(vector<vector<char>> &board)
{
    int n = board.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (board[i][j] == '.')
            {

                for (int d = 1; d <= 9; d++)
                {
                    if (safe(board, i, j, d))
                    {

                        board[i][j] = '0' + d;
                        if (solve(board))
                        {
                            return true;
                        }
                        else
                        {

                            board[i][j] = '.';
                        }
                    }
                }

                return false;
            }
        }
    }

    return true;
}

void solveSudoku(vector<vector<char>> &board) { solve(board); }
int main()
{
    return 0;
}