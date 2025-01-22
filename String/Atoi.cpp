#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{

    int sign = 1;

    long long num = 0;

    int i = 0;

    int n = s.length();

    while (i < n && s[i] == ' ')
    {
        i++;
    }

    if (i < n && (s[i] == '-' || s[i] == '+'))
    {
        sign = s[i] == '-' ? -1 : 1;
        i++;
    }

    while (i < n && isdigit(s[i]))
    {
        num = num * 10 + (s[i] - '0');

        if (num * sign < INT_MIN)
        {
            return INT_MIN;
        }
        if (num * sign > INT_MAX)
        {
            return INT_MAX;
        }
        i++;
    }

    return num * sign;
}
int main()
{
    return 0;
}