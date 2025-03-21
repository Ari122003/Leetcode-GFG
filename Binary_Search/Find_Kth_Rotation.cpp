#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr)
{
    // Code Here

    int i = 0;
    int j = arr.size() - 1;

    int mid;

    while (i < j)
    {

        mid = i + (j - i) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            return mid + 1;
        }

        if (arr[i] < arr[mid])
        {

            i = mid + 1;
        }
        else
        {
            j = mid;
        }
    }

    return 0;
}
int main()
{
    return 0;
}