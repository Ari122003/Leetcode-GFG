#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (i != j && i < j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        int low = 0;
        int high = matrix[0].size() - 1;

        while (low < high)
        {
            swap(matrix[i][low], matrix[i][high]);
            low++;
            high--;
        }
    }
}

int main()
{
    return 0;
}