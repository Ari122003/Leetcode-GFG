#include <bits/stdc++.h>
using namespace std;

int minFlips(string S)
{
    // your code here

    char p1 = '0';
    char p2 = '1';

    int c1 = 0, c2 = 0;

    for (char ch : S)
    {

        if (ch != p1)
        {
            c1++;
        }
        else
        {
            c2++;
        }

        swap(p1, p2);
    }

    return min(c1, c2);
}
int main()
{
    return 0;
}