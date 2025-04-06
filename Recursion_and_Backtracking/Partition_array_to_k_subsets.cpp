#include <bits/stdc++.h>
using namespace std;

int countt = 0;
bool solve(vector<int> &arr, int i, int target, vector<vector<int>> &dp)
{

    if (target == 0)
    {
        countt++;
        return true;
    }

    if (i >= arr.size() || target < 0)
    {
        return false;
    }

    if (dp[i][target] != -1)
    {
        if (target == 0)
        {
            countt++;
        }
        return dp[i][target];
    }

    return dp[i][target] = solve(arr, i + 1, target - arr[i], dp) || solve(arr, i + 1, target, dp);
}

bool isKPartitionPossible(vector<int> &arr, int k)
{
    // Your code here

    if (k == 1)
        return true;

    int sum = 0;

    int n = arr.size();

    for (int i : arr)
    {
        sum += i;
    }

    if (sum % k != 0)
    {
        return false;
    }

    vector<vector<int>> dp(n, vector<int>((sum / k) + 1, -1));

    return solve(arr, 0, sum / k, dp);
}
int main()
{

    vector<int> arr = {2, 1, 4, 5, 6};
    int k = 3;

    bool res = isKPartitionPossible(arr, k);
    cout << countt;

    return 0;
}