#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, int i, vector<vector<int>> &arr)
{

    if (i >= nums.size())
    {
        arr.push_back({nums});
        return;
    }

    for (int idx = i; idx < nums.size(); idx++)
    {
        swap(nums[idx], nums[i]);

        solve(nums, i + 1, arr);

        swap(nums[idx], nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> arr;

    solve(nums, 0, arr);

    return arr;
}
int main()
{
    return 0;
}