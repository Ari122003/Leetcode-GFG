#include <bits/stdc++.h>
using namespace std;

double power(double N, int R)
{

    if (R < 0)
    {
        N = 1 / N;
        R = -R;
    }

    double ans = 1;

    while (R > 0)
    {
        int bit = R % 2;

        if (bit == 1)
        {
            ans *= N;
        }

        N *= N;
        R /= 2;
    }

    return ans;
}

long long power2(int N, int R)
{

    long long expo = N;
    long long ans = 1;

    while (R > 0)
    {
        int bit = R % 2;

        if (bit == 1)
        {
            ans = (ans * expo) % 10000007;
        }

        expo = (expo * expo) % 10000007;
        R /= 2;
    }

    return ans;
}

int main()
{
    cout << power2(2, 10);

    return 0;
}