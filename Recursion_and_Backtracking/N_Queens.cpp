#include <bits/stdc++.h>
using namespace std;

bool safe(vector<string> chess, int row, int col, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (chess[row][i] == 'Q')
        {
            return false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (chess[i][col] == 'Q')
        {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (chess[i][j] == 'Q')
        {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (chess[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}
void solve(vector<string> chess, vector<vector<string>> &ans, int row,
           int n)
{

    if (row >= n)
    {
        ans.push_back(chess);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (safe(chess, row, i, n))
        {
            chess[row][i] = 'Q';
            solve(chess, ans, row + 1, n);
            chess[row][i] = '.';
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> chess(n, string(n, '.'));

    solve(chess, ans, 0, n);

    return ans;
}
int main()
{
    return 0;
}