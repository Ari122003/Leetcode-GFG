#include <bits/stdc++.h>
using namespace std;

void solve(string s, string &ans, int i, int k)
{

    if (k == 0)
    {

        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {

            if (s[j] > s[i])
            {

                swap(s[j], s[i]);

                if (s > ans)
                {
                    ans = s;
                }

                solve(s, ans, i + 1, k - 1);

                swap(s[j], s[i]);
            }
        }
    }
}

string findMaximumNum(string &s, int k)
{
    string ans = s;

    solve(s, ans, 0, k);

    return ans;
}
int main()
{
    return 0;
}