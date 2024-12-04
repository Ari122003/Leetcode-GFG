#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &arr1, vector<int> &arr2)
{
    // sort both arrays if not

    int i = 0, j = 0;

    vector<int> ans;

    while (i < arr1.size() && j < arr2.size())
    {

        if (i > 0 && arr1[i] == arr1[i - 1])
        {
            i++;
            continue;
        }

        if (j > 0 && arr2[j] == arr2[j - 1])
        {
            j++;
            continue;
        }

        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }

        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return ans;
}
int main()
{
    return 0;
}