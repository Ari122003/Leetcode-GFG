#include <bits/stdc++.h>
using namespace std;

int minSwap(int arr[], int n, int k)
{

    if (n == 1)
        return 0;

    int windowSize = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            windowSize++;
        }
    }

    if (windowSize == 0)
        return 0;

    int swap = 0;

    for (int i = 0; i < windowSize; i++)
    {
        if (arr[i] > k)
        {
            swap++;
        }
    }

    int left = 0;
    int right = windowSize;

    int minSwap = swap;

    while (right < n)
    {

        if (arr[left] > k)
        {
            swap--;
        }

        if (arr[right] > k)
        {
            swap++;
        }

        minSwap = min(swap, minSwap);

        left++;
        right++;
    }

    return minSwap;
}
int main()
{
    return 0;
}