#include <iostream>
#include <vector>

using namespace std;

int solve(vector<int> nums, int k)
{
    if (k < 0)
    {
        return 0;
    }
    int count = 0;
    int sum = 0;
    int i = 0, j = 0;

    while (j < nums.size())
    {
        sum += nums[j] % 2;

        if (sum > k)
        {
            while (sum > k)
            {
                sum -= nums[i] % 2;
                i++;
            }
        }

        count += j - i + 1;
        j++;
    }

    return count;
}

int numberOfSubarrays(vector<int> &nums, int k)
{
    return solve(nums, k) - solve(nums, k - 1);
}

int main()
{
    return 0;
}