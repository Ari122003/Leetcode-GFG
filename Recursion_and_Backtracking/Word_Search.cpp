#include <bits/stdc++.h>
using namespace std;

bool solve(vector<vector<char>> &board, string &word, int i, int r, int c,
           int &row, int &col, vector<vector<bool>> &positions)
{
    if (i == word.size())
    {
        return true;
    }

    if (r < 0 || c < 0 || r >= row || c >= col || word[i] != board[r][c] ||
        positions[r][c])
    {
        return false;
    }

    positions[r][c] = true;
    bool res = solve(board, word, i + 1, r + 1, c, row, col, positions) ||
               solve(board, word, i + 1, r, c + 1, row, col, positions) ||
               solve(board, word, i + 1, r - 1, c, row, col, positions) ||
               solve(board, word, i + 1, r, c - 1, row, col, positions);

    positions[r][c] = false;

    return res;
}

bool exist(vector<vector<char>> &board, string word)
{

    int row = board.size();
    int col = board[0].size();
    vector<vector<bool>> positions(row, vector<bool>(col, false));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (board[i][j] == word[0] &&
                solve(board, word, 0, i, j, row, col, positions))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    return 0;
}