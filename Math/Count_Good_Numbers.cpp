#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

long long power(long long x, long long n)
{
    long long result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = (result * x) % mod;
        }
        x = (x * x) % mod;
        n /= 2;
    }
    return result;
}

int countGoodNumbers(long long n)
{

    long long even = (n + 1) / 2;
    long long odd = n / 2;

    return (power(5, even) * power(4, odd)) % mod;
}
int main()
{
    return 0;
}