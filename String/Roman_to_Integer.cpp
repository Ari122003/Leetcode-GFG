#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    map<char, int> table;

    table['I'] = 1;
    table['V'] = 5;
    table['X'] = 10;
    table['L'] = 50;
    table['C'] = 100;
    table['D'] = 500;
    table['M'] = 1000;

    int ans = 0;

    int curr = -1;

    int sum = 0;

    int size = s.length();

    for (int i = size - 1; i >= 0; i--)
    {

        int num = table[s[i]];

        if (curr == -1)
        {
            sum = num;
            curr = num;
        }

        else if (num < curr)
        {
            sum -= num;
        }
        else if (num == curr)
        {
            sum += num;
        }
        else
        {
            ans += sum;
            sum = num;
            curr = num;
        }
    }

    ans += sum;

    return ans;
}
int main()
{
    return 0;
}