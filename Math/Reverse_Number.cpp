#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 1234;

    int ans = 0;

    while (num > 0)
    {

        int dig = num % 10;

        ans = ans * 10 + dig;

        num /= 10;
    }

    cout << ans;

    return 0;
}