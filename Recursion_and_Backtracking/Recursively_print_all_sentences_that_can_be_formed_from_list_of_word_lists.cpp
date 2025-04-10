#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<string>> &list, int i, vector<string> temp, vector<vector<string>> &ans)
{

    if (i >= list.size())
    {
        ans.push_back(temp);
        return;
    }

    for (int j = 0; j < list[i].size(); j++)
    {

        temp.push_back(list[i][j]);

        solve(list, i + 1, temp, ans);

        temp.pop_back();
    }
}

vector<vector<string>> sentences(vector<vector<string>> &list)
{
    vector<string> temp;
    vector<vector<string>> ans;

    solve(list, 0, temp, ans);

    return ans;
}
int main()
{
    return 0;
}