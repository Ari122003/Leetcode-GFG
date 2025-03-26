#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int i, int key, vector<int> comb,
           vector<vector<int>> &ans)
{
    if (key == 0)
    {
        ans.push_back(comb);
        return;
    }
    if (i >= arr.size() || key < 0)
        return;

    // Include the current element
    comb.push_back(arr[i]);
    solve(arr, i + 1, key - arr[i], comb, ans);

    // Exclude and move to next unique element
    comb.pop_back();
    // Skip all duplicates
    int index = i;

    while (index < arr.size() && arr[i] == arr[index])
    {
        index++;
    }
    solve(arr, index, key, comb, ans);
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> comb;

    sort(candidates.begin(), candidates.end());

    solve(candidates, 0, target, comb, ans);

    return ans;
}

int main()
{
    return 0;
}