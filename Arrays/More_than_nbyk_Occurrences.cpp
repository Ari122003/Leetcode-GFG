#include <bits/stdc++.h>
using namespace std;

int countOccurence(int nums[], int n, int k)
{

    sort(nums, nums + n);

    int freq = 0;

    int last = nums[0];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        if (nums[i] == last)
        {
            freq++;
        }
        else
        {
            if (freq > n / k)
            {
                ans++;
            }
            freq = 1;
            last = nums[i];
        }
    }

    if (freq > n / k)
    {
        ans++;
    }

    return ans;
}
int main()
{
    return 0;
}