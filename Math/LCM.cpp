#include <bits/stdc++.h>
using namespace std;

void lcmAndGcd(long long a, long long b)
{

    // LCM

    long long lcm;

    for (int i = 1; i <= b; i++)
    {

        long long x = a * i;

        if (x % b == 0)
        {
            lcm = x;
            break;
        }
    }

    cout << "LCM is: " << lcm << endl;
}
int main()
{
    lcmAndGcd(9, 6);
    return 0;
}