#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                           vector<int> &arr3)
{

    int i = 0, j = 0, k = 0;
    vector<int> ans;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {

        int mini = min(arr1[i], min(arr2[j], arr3[k]));

        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }

        else if (j > 0 && arr2[j] == arr2[j - 1])
        {
            j++;
            continue;
        }
        else if (k > 0 && arr3[k] == arr3[k - 1])
        {
            k++;
            continue;
        }

        else if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
        }

        else if (arr1[i] == mini)
        {
            i++;
        }
        else if (arr2[j] == mini)
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    if (ans.empty())
    {
        return {-1};
    }

    return ans;
}
int main()
{
    return 0;
}