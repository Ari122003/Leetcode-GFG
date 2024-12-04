#include <bits/stdc++.h>
using namespace std;
string compressedString(string word)
{

    char ele = word[0];
    int freq = 0;

    string ans = "";

    for (auto ch : word)
    {
        if (ch == ele)
        {
            freq++;
        }
        else
        {

            while (freq > 9)
            {
                ans += '9';
                ans += ele;
                freq -= 9;
            }

            ans += freq + '0';
            ans += ele;
            ele = ch;
            freq = 1;
        }
    }

    while (freq > 9)
    {
        ans += '9';
        ans += ele;
        freq -= 9;
    }

    ans += freq + '0';
    ans += ele;

    return ans;
}
int main()
{
    return 0;
}