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

int countSubstrings(string s)
{

    int count = 0;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                bool isPalindrom = checkPalindrom(s, i, j);
                if (isPalindrom)
                {
                    count++;
                }
            }
        }
    }

    return count + n;
}
int main()
{
    return 0;
}