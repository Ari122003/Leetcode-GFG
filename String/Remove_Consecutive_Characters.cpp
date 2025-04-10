#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string &s)
{

    char ele = s[0];
    string ans = "";

    for (char ch : s)
    {

        if (ch != ele)
        {
            ans += ele;
            ele = ch;
        }
    }

    ans += ele;

    return ans;
}
int main()
{
    return 0;
}