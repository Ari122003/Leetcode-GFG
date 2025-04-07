#include <bits/stdc++.h>
using namespace std;

bool safe(vector<vector<int>> &mat, int r, int c, vector<vector<bool>> &visited)
{
    if (r < 0 || r >= mat.size() || c < 0 || c >= mat[0].size())
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

void solve(vector<vector<int>> &mat, int r, int c, int &er, int &ec, vector<vector<bool>> &visited, int path, int &maxPath)
{

    if (r == er && c == ec)
    {
        maxPath = max(maxPath, path);
        return;
    }

    visited[r][c] = true;

    int dirs[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    for (int i = 0; i < 4; ++i)
    {

        int nr = r + dirs[i][0];
        int nc = c + dirs[i][1];

        if (safe(mat, nr, nc, visited))
        {
            solve(mat, nr, nc, er, ec, visited, path + 1, maxPath);
        }
    }

    visited[r][c] = false;
}

int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
{
    if (matrix[xd][yd] == 0 || matrix[xs][ys] == 0)
    {
        return -1;
    }
    vector<vector<bool>> visited(matrix.size(), vector<bool>(matrix[0].size(), false));

    int maxPath = -1;

    solve(matrix, xs, ys, xd, yd, visited, 0, maxPath);

    return maxPath;
}
int main()
{
    return 0;
}