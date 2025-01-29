#include <bits/stdc++.h>
using namespace std;

int minSwaps(string s)
{
    int balance = 0;

    int extraClosed = 0;

    for (char ch : s)
    {
        if (ch == ']')
        {
            balance++;
        }
        else
        {
            balance--;
        }

        extraClosed = max(balance, extraClosed);
    }

    return (extraClosed + 1) / 2;
}
int main()
{
    return 0;
}