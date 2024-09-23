#include <bits/stdc++.h>
using namespace std;

bool checkPalindrom(string str, int start, int end)
{
    int i = start;
    int j = end;

    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

string longestPalindrome(string s)
{

    string longest = s.substr(0, 1);

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                bool isPalindrom = checkPalindrom(s, i, j);
                if (isPalindrom && j - i + 1 > longest.size())
                {
                    longest = s.substr(i, j - i + 1);
                }
            }
        }
    }

    return longest;
}
int main()
{
    return 0;
}