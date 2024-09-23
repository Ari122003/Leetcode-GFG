#include <bits/stdc++.h>
using namespace std;

int findSingleElement(vector<int> arr)
{
    int n = arr.size();

    map<int, int> hash;

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (auto i : hash)
    {
        if (i.second == 1)
        {
            return i.first;
        }
    }
}

int main()
{
    vector<int> nums = {5, 5, 5, 2, 9, 9, 9, 3, 4, 3, 4, 4, 3};
    cout << findSingleElement(nums);
    return 0;
}