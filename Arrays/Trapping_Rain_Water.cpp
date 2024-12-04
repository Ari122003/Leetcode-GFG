#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &arr)
{

    int n = arr.size();

    int leftMax = arr[0];

    int rightMax = arr[n - 1];

    vector<int> left, right(n);

    for (int i = 0; i < n; i++)
    {

        left.push_back(max(leftMax, arr[i]));

        leftMax = max(leftMax, arr[i]);
    }

    for (int j = n - 1; j >= 0; j--)
    {

        right[j] = max(rightMax, arr[j]);

        rightMax = max(rightMax, arr[j]);
    }

    int water = 0;

    for (int i = 0; i < n; i++)
    {

        water += min(left[i], right[i]) - arr[i];
    }

    return water;
}
int main()
{
    return 0;
}