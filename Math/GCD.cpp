#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 100;
    int b = 35;

    while (b > 0)
    {
        int rem = a % b;

        a = b;
        b = rem;
    }

    cout << a;
    return 0;
}