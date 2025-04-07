#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &mat, int r, int c, int &n, int &m, vector<vector<bool>> &visited)
{

    if (r < 0 || r >= n || c < 0 || c >= m)
    {
        return false;
    }

    if (visited[r][c])
    {
        return false;
    }

    return true;
}

void solve(vector<vector<int>> &mat, int r, int c, int &n, int &m, vector<vector<bool>> &visited, vector<int> path, vector<vector<int>> &ans)
{

    if (r == n - 1 && c == m - 1)
    {
        path.push_back(mat[r][c]);
        ans.push_back(path);
        return;
    }

    visited[r][c] = true;
    path.push_back(mat[r][c]);

    if (isSafe(mat, r + 1, c, n, m, visited))
    {

        solve(mat, r + 1, c, n, m, visited, path, ans);
    }

    if (isSafe(mat, r, c + 1, n, m, visited))
    {
        solve(mat, r, c + 1, n, m, visited, path, ans);
    }

    visited[r][c] = false;
    path.pop_back();
}

vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    vector<int> path;
    vector<vector<int>> ans;

    solve(grid, 0, 0, n, m, visited, path, ans);

    return ans;
}
int main()
{
    return 0;
}