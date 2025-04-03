#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr, int i, int key, vector<vector<int>> &dp)
{
    if (key == 0)
    {
        return true;
    }
    if (i >= arr.size() || key < 0)
    {
        return false;
    }

    if (dp[i][key] != -1)
    {
        return dp[i][key];
    }

    return dp[i][key] = solve(arr, i + 1, key - arr[i], dp) ||
                        solve(arr, i + 1, key, dp);
}

bool canPartition(vector<int> &nums)
{
    int sum = 0;

    for (int e : nums)
    {
        sum += e;
    }

    if (sum % 2 != 0)
    {
        return false;
    }

    vector<vector<int>> dp(nums.size(), vector<int>((sum / 2) + 1, -1));

    return solve(nums, 0, sum / 2, dp);
}
int main()
{
    return 0;
}