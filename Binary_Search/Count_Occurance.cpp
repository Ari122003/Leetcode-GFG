#include <bits/stdc++.h>
using namespace std;

int countFreq(vector<int> &arr, int target)
{
    // code here

    int i = 0;
    int j = arr.size() - 1;

    int lb = arr.size();
    int ub = arr.size();

    while (i <= j)
    {

        int mid = i + (j - i) / 2;

        if (arr[mid] >= target)
        {
            lb = mid;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }

    if (lb == arr.size())
    {
        return 0;
    }

    i = 0;
    j = arr.size() - 1;

    while (i <= j)
    {

        int mid = i + (j - i) / 2;

        if (arr[mid] > target)
        {
            ub = mid;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }

    return (ub - 1) - lb + 1;
}
int main()
{
    return 0;
}