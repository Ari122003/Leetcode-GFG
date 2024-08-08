#include <iostream>
#include <vector>

using namespace std;

// Only rows are sorted

bool searchMatrix1(vector<vector<int>> &matrix, int target)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int low = 0;

    int high = (row * col) - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int value = matrix[mid / col][mid % col];

        if (value == target)
        {
            return true;
        }
        else if (value < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return false;
}

// Both rows and columns are sorted

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int row = 0;
    int col = matrix[0].size() - 1;

    while (row < matrix.size() && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return true;
        }

        if (matrix[row][col] < target)
        {
            row++;
        }
        else
        {
            col--;
        }
    }

    return false;
}
int main()
{
    return 0;
}