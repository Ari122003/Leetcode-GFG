#include <bits/stdc++.h>
using namespace std;

void solve(int n, int open, int close, string s, vector<string> &ans)
{

    if (s.length() == 2 * n)
    {
        ans.push_back(s);
        return;
    }

    if (open < n)
    {

        solve(n, open + 1, close, s + '(', ans);
    }

    if (close < open)
    {

        solve(n, open, close + 1, s + ')', ans);
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    string s = "";

    solve(n, 0, 0, s, ans);

    return ans;
}
int main()
{
    vector<string> ans = generateParenthesis(3);

    for (auto str : ans)
    {
        cout << str << " ";
    }
    return 0;
}