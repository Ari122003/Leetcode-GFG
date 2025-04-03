#include <bits/stdc++.h>
using namespace std;

void solve(string &s, string temp, int i, int open, int close, int balance,
           unordered_set<string> &store)
{
    if (i >= s.size())
    {
        if (open == 0 && close == 0 && balance == 0)
        {
            store.insert(temp);
        }
        return;
    }

    char ch = s[i];

    if (ch == '(' && open > 0)
    {
        solve(s, temp, i + 1, open - 1, close, balance, store);
    }

    if (ch == ')' && close > 0)
    {
        solve(s, temp, i + 1, open, close - 1, balance, store);
    }

    if (ch != '(' && ch != ')')
    {
        solve(s, temp + ch, i + 1, open, close, balance, store);
    }

    else if (ch == '(')
    {
        solve(s, temp + ch, i + 1, open, close, balance + 1, store);
    }

    else if (ch == ')' && balance > 0)
    {
        solve(s, temp + ch, i + 1, open, close, balance - 1, store);
    }
}

vector<string> removeInvalidParentheses(string s)
{
    unordered_set<string> store;

    int open = 0, close = 0;

    for (char ch : s)
    {
        if (ch == '(')
        {
            open++;
        }
        else if (ch == ')')
        {
            if (open > 0)
            {
                open--;
            }
            else
            {
                close++;
            }
        }
    }

    solve(s, "", 0, open, close, 0, store);

    vector<string> ans(store.begin(), store.end());
    return ans;
}
int main()
{
    return 0;
}