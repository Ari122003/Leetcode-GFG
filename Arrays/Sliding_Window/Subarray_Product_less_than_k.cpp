#include <bits/stdc++.h>
using namespace std;

int numSubarrayProductLessThanK(vector<int> &nums, int k)
{

    int i = 0;
    int j = 0;

    int n = nums.size();

    double prod = 1;

    int count = 0;

    while (j < n)
    {

        prod *= (double)nums[j];

        while (prod >= k && i <= j)
        {
            prod /= (double)nums[i];
            i++;
        }

        count += j - i + 1;

        j++;
    }

    return count;
}
int main()
{
    return 0;
}