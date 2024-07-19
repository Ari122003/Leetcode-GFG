#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{

    int fc = matrix[0][0];

    for (int i = 0; i < matrix.size(); i++)
    {

        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                if (j == 0)
                {
                    fc = 0;
                }
                else
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
    }

    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (matrix[0][0] == 0)
    {
        for (int i = 0; i < matrix[0].size(); i++)
        {
            matrix[0][i] = 0;
        }
    }
    if (fc == 0)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    return 0;
}