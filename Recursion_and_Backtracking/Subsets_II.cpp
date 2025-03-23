#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int i, set<vector<int>> &arr)
{
    static vector<int> temp;

    if (i >= nums.size())
    {

        arr.insert(temp);

        return;
    }

    temp.push_back(nums[i]);

    solve(nums, i + 1, arr);

    temp.pop_back();
    int index = i;

    while (index < nums.size() && nums[i] == nums[index])
    {
        index++;
    }

    solve(nums, index, arr);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    set<vector<int>> arr;
    sort(nums.begin(), nums.end());
    solve(nums, 0, arr);

    vector<vector<int>> ans(arr.begin(), arr.end());

    return ans;
}
int main()
{
    return 0;
}