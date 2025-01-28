#include <bits/stdc++.h>
using namespace std;

// Brute force

bool checkPalindrome(string s, int end)
{
    int i = 0, j = end;

    while (i < j)
    {
        if (s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;
}

string shortestPalindrome(string s)
{

    string ans = "";

    int n = s.length();

    for (int i = n - 1; i >= 0; i--)
    {

        bool isPalindrome = checkPalindrome(s, i);

        if (isPalindrome)
        {
            string suffix = s.substr(i + 1, n - i - 1);

            reverse(suffix.begin(), suffix.end());

            ans += suffix;
            break;
        }
    }

    ans += s;

    return ans;
}

// Using KMP Algorithm

string shortestPalindrome(string s)
{

    int n = s.length();

    string rev = s;

    reverse(rev.begin(), rev.end());

    string conc = s + '#' + rev;

    vector<int> lcp(conc.length(), 0);

    for (int j = 1; j < conc.length(); j++)
    {

        int i = lcp[j - 1];

        while (i > 0 && conc[i] != conc[j])
        {
            i = lcp[i - 1];
        }

        if (conc[i] == conc[j])
        {
            i++;
        }

        lcp[j] = i;
    }

    int palSize = lcp.back();

    string suffix = s.substr(palSize);

    reverse(suffix.begin(), suffix.end());

    return suffix + s;
}
int main()
{
    return 0;
}