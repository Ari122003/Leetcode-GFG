#include <bits/stdc++.h>
using namespace std;
int smallestSubWithSum(int k, vector<int> &nums)
{

    int n = nums.size();

    int i = 0, j = 0;

    int sum = 0;

    int len = n + 1;

    while (j < n)
    {
        sum += nums[j];

        while (sum > k)
        {
            len = min(len, j - i + 1);
            sum -= nums[i];
            i++;
        }

        j++;
    }

    return len == n + 1 ? 0 : len;
}
int main()
{
    return 0;
}