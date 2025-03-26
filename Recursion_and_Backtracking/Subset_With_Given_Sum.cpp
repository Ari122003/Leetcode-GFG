#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> arr)
{
    int sum = 0;

    for (int e : arr)
    {
        sum += e;
    }

    return sum;
}

void solve(vector<int> arr, int i, int key, int &count, vector<int> temp)
{

    if (i >= arr.size())
    {
        if (sum(temp) == key)
        {
            count++;
        }

        return;
    }

    // exclude

    solve(arr, i + 1, key, count, temp);

    // inlcude
    temp.push_back(arr[i]);

    solve(arr, i + 1, key, count, temp);
}

int perfectSum(vector<int> &arr, int target)
{

    int count = 0;
    vector<int> temp;

    solve(arr, 0, target, count, temp);

    return count;
}
int main()
{
    return 0;
}