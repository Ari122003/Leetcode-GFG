#include <bits/stdc++.h>
using namespace std;
void solve(int n, vector<string> &ans, string s)
{

    if (s.length() == n)
    {
        ans.push_back(s);
        return;
    }

    solve(n, ans, s + '0');

    if (s[s.length() - 1] != '1')
    {

        solve(n, ans, s + '1');
    }
}

vector<string> generateBinaryStrings(int num)
{

    vector<string> ans;
    string s;

    solve(num, ans, s);

    return ans;
}
int main()
{
    return 0;
}