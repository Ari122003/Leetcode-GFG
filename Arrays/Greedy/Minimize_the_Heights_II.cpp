#include <bits/stdc++.h>
using namespace std;

int getMinDiff(vector<int> &arr, int k)
{

    sort(arr.begin(), arr.end());

    int n = arr.size();

    int diff = arr[n - 1] - arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] - k < 0)
            continue;

        int newSmall = min(arr[0] + k, arr[i] - k);

        int newBig = max(arr[n - 1] - k, arr[i - 1] + k);

        diff = min(diff, newBig - newSmall);
    }

    return diff;
}
int main()
{
    return 0;
}