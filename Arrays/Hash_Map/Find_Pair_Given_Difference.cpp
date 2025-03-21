#include <bits/stdc++.h>
using namespace std;

bool findPair(vector<int> &arr, int x)
{
    // code here

    int n = arr.size();

    if (n == 1)
    {
        return false;
    }

    unordered_set<int> hash;

    for (int i = 0; i < n; i++)
    {

        if (hash.count(arr[i] + x) || hash.count(arr[i] - x))
        {
            return true;
        }

        hash.insert(arr[i]);
    }

    return false;
}
int main()
{
    return 0;
}