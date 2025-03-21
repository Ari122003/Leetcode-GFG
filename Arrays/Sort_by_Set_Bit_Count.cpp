#include <bits/stdc++.h>
using namespace std;

static int setCount(int n)
{
    int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}
static bool solve(int a, int b)
{

    return setCount(a) > setCount(b);
}

void sortBySetBitCount(int arr[], int n)
{

    stable_sort(arr, arr + n, solve);
}
int main()
{
    return 0;
}