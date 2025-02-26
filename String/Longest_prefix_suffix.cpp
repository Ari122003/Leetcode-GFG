#include <bits/stdc++.h>
using namespace std;

string longestPrefix(string s)
{

    int n = s.length();
    vector<int> lps(n, 0);

    int i = 0;
    int j = 1;

    while (j < n)
    {
        if (s[i] == s[j])
        {
            lps[j] = i + 1;
            i++;
            j++;
        }
        else
        {
            if (i > 0)
            {
                i = lps[i - 1];
            }
            else
            {
                j++;
            }
        }
    }

    int len = lps[n - 1];

    string ans = s.substr(0, len);

    return ans;
}
int main()
{
}