#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &arr, vector<int> nums, vector<int> temp, int index)
{

    if (index >= nums.size())
    {
        arr.push_back(temp);
        return;
    }

    temp.push_back(nums[index]);

    solve(arr, nums, temp, index + 1);
    temp.pop_back();
    solve(arr, nums, temp, index + 1);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> arr;
    vector<int> temp;

    solve(arr, nums, temp, 0);

    return arr;
}
int main()
{
    return 0;
}