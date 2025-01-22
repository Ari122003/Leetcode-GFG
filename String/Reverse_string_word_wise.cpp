#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    reverse(s.begin(), s.end());

    int n = s.length();

    string ans = "";

    for (int i = 0; i < n; i++)
    {
        string str = "";

        while (i < n && s[i] != ' ')
        {
            str += s[i];
            i++;
        }

        reverse(str.begin(), str.end());

        if (str.length() > 0)
        {
            ans.length() != 0 ? ans += ' ' + str : ans += str;
        }
    }

    return ans;
}
int main()
{
    return 0;
}