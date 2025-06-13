#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val = 583;
    int num = val;

    int sum = 0;

    while (num > 0)
    {
        int dig = num % 10;

        sum += dig * dig * dig;

        num = num / 10;
    }

    if (sum == val)
    {
        cout << "Amrmstrong";
    }
    else
    {
        cout << "Not";
    }
    return 0;
}