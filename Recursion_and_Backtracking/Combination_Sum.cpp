#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int i, int key, vector<int> comb,
           vector<vector<int>> &ans)
{
    if (i >= arr.size() || key < 0)
    {

        return;
    }

    if (key == 0)
    {
        ans.push_back(comb);
        return;
    }
    // include multiple times
    comb.push_back(arr[i]);
    solve(arr, i, key - arr[i], comb, ans); // Didn't increase i because repeatation allowed

    // exclude
    comb.pop_back();
    solve(arr, i + 1, key, comb, ans);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> comb;

    solve(candidates, 0, target, comb, ans);

    return ans;
}
int main()
{
    return 0;
}