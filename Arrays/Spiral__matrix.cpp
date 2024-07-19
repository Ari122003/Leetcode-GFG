#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int m = matrix[0].size();
    int n = matrix.size();

    vector<int> ans;

    int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {

            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }

            bottom--;
        }

        if (left <= right)
        {

            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = spiralOrder(mat);

    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}