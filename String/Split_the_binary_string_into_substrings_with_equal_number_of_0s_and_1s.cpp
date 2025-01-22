#include <bits/stdc++.h>
using namespace std;

int maxSubStr(string str)
{

    int zero = 0;
    int one = 0;

    int count = 0;

    for (char ch : str)
    {

        if (ch == '0')
        {
            zero++;
        }
        if (ch == '1')
        {
            one++;
        }

        if (zero == one)
        {
            count++;
            zero = 0;
            one = 0;
        }
    }

    if (zero != one)
    {
        return -1;
    }

    return count;
}
int main()
{
    return 0;
}