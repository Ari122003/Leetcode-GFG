#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{

    int count = 0;

    int i = 0;
    int j = 0;

    while (j < s.length())
    {
        if (s[j] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            s[i] = ' ';
            s[j] = ' ';
            i = j + 1;
        }

        j++;
    }

    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    return s;
}
int main()
{
    return 0;
}