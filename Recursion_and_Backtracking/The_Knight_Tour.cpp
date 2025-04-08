#include <bits/stdc++.h>
using namespace std;

bool safe(vector<vector<int>> &mat, int r, int c,
          vector<vector<bool>> &visited)
{
    if (r < 0 || r >= mat.size() || c < 0 || c >= mat[0].size())
    {
        return false;
    }

    if (visited[r][c])
    {
        return false;
    }

    return true;
}

bool solve(vector<vector<int>> &mat, int r, int c, int room,
           vector<vector<bool>> &visited)
{
    if (room != mat[r][c])
    {
        return false;
    }

    if (room == mat.size() * mat[0].size() - 1)
    {
        return true;
    }

    visited[r][c] = true;

    int dirs[8][2] = {{-2, -1}, {-2, 1}, {-1, +2}, {+1, +2}, {+2, +1}, {+2, -1}, {+1, -2}, {-1, -2}};

    for (int i = 0; i < 8; ++i)
    {

        int nr = r + dirs[i][0];
        int nc = c + dirs[i][1];

        if (safe(mat, nr, nc, visited))
        {
            if (solve(mat, nr, nc, room + 1, visited))
            {
                return true;
            }
        }
    }

    visited[r][c] = false;

    return false;
}

bool checkValidGrid(vector<vector<int>> &grid)
{

    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));

    return solve(grid, 0, 0, 0, visited);
}
int main()
{
    return 0;
}