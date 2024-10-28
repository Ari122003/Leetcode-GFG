#include <bits/stdc++.h>
using namespace std;

void rearrange(long long *arr, int n)
{

    int start = 0;
    int end = n - 1;

    long long great = arr[end] + 1;

    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            arr[i] += (arr[end] % great) * great;
            end--;
        }
        else
        {
            arr[i] += (arr[start] % great) * great;
            start++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / great;
    }
}
int main()
{
    return 0;
}