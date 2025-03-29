#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &mat, vector<vector<bool>> &visited, int r, int c, int &n)
{

    if (r >= n || r < 0 || c < 0 || c >= n)
    {
        return false;
    }

    if (mat[r][c] == 0)
    {
        return false;
    }

    if (visited[r][c])
    {
        return false;
    }

    return true;
}

void solve(vector<vector<int>> &mat, vector<string> &ans, vector<vector<bool>> &visited, string path, int r, int c, int &n)
{
    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[r][c] = true;

    if (isSafe(mat, visited, r + 1, c, n))
    {

        solve(mat, ans, visited, path + 'D', r + 1, c, n);
    }
    if (isSafe(mat, visited, r, c - 1, n))
    {

        solve(mat, ans, visited, path + 'L', r, c - 1, n);
    }
    if (isSafe(mat, visited, r, c + 1, n))
    {

        solve(mat, ans, visited, path + 'R', r, c + 1, n);
    }
    if (isSafe(mat, visited, r - 1, c, n))
    {

        solve(mat, ans, visited, path + 'U', r - 1, c, n);
    }

    visited[r][c] = false;
}

vector<string> findPath(vector<vector<int>> &mat)
{

    int n = mat.size();

    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    solve(mat, ans, visited, "", 0, 0, n);

    return ans;
}
int main()
{
    return 0;
}