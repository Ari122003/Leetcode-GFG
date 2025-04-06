#include <bits/stdc++.h>
using namespace std;

bool safe(vector<vector<int>> &mat, int r, int c, int &m, int &n, vector<vector<bool>> &visited)
{
    if (r < 0 || r >= m || c < 0 || c >= n)
    {
        return false;
    }

    if (mat[r][c] == 0)
        return false;

    if ((r > 0 && mat[r - 1][c] == 0) ||
        (r < m - 1 && mat[r + 1][c] == 0) ||
        (c > 0 && mat[r][c - 1] == 0) ||
        (c < n - 1 && mat[r][c + 1] == 0))
    {
        return false;
    }

    if (visited[r][c])
    {
        return false;
    }

    return true;
}

void solve(vector<vector<int>> &mat, int r, int c, int &m, int &n, int path, int &minPath, vector<vector<bool>> &visited, vector<vector<int>> &memo)
{

    if (c == n - 1)
    {
        if (path != 0)
        {
            minPath = min(minPath, path + 1);
        }
        return;
    }

    if (path >= minPath || path >= memo[r][c])
        return;

    visited[r][c] = true;
    memo[r][c] = path;

    if (safe(mat, r, c + 1, m, n, visited))
    {
        solve(mat, r, c + 1, m, n, path + 1, minPath, visited, memo);
    }

    if (safe(mat, r + 1, c, m, n, visited))
    {
        solve(mat, r + 1, c, m, n, path + 1, minPath, visited, memo);
    }
    if (safe(mat, r - 1, c, m, n, visited))
    {
        solve(mat, r - 1, c, m, n, path + 1, minPath, visited, memo);
    }

    if (safe(mat, r, c - 1, m, n, visited))
    {
        solve(mat, r, c - 1, m, n, path + 1, minPath, visited, memo);
    }

    visited[r][c] = false;
}

int findShortestPath(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();

    vector<vector<bool>> visited(m, vector<bool>(n, false));

    int minPath = INT_MAX;

    vector<vector<int>> memo(m, vector<int>(n, INT_MAX));

    for (int i = 0; i < m; i++)
    {

        if (safe(mat, i, 0, m, n, visited))
        {

            solve(mat, i, 0, m, n, 0, minPath, visited, memo);
        }
    }

    return (minPath == INT_MAX) ? -1 : minPath;
}

int main()
{
    return 0;
}