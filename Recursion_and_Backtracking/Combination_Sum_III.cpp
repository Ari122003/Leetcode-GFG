#include <bits/stdc++.h>
using namespace std;

void solve(int k, int n, int i, vector<int> temp,
           vector<vector<int>> &ans)
{

    if (n == 0 && temp.size() == k)
    {
        ans.push_back(temp);
        return;
    }
    if (i > 9 || n < 0 || temp.size() > k)
    {
        return;
    }

    // include

    temp.push_back(i);
    solve(k, n - i, i + 1, temp, ans);

    // exclude

    temp.pop_back();
    solve(k, n, i + 1, temp, ans);
}

vector<vector<int>> combinationSum3(int k, int n)
{
    vector<int> temp;
    vector<vector<int>> ans;
    solve(k, n, 1, temp, ans);

    return ans;
}

int main()
{
    return 0;
}