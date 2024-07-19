#include <iostream>
#include <vector>
#include <map>
using namespace std;

int solve(vector<int> nums, int k)
{
    int i = 0, j = 0;
    int count = 0;
    map<int, int> hash;

    while (j < nums.size())
    {
        hash[nums[j]]++;

        if (hash.size() > k)
        {
            while (hash.size() > k)
            {
                hash[nums[i]]--;
                if (hash[nums[i]] == 0)
                {
                    hash.erase(nums[i]);
                }
                i++;
            }
        }

        count += j - i + 1;
        j++;
    }

    return count;
}

int subarraysWithKDistinct(vector<int> &nums, int k)
{
    return solve(nums, k) - solve(nums, k - 1);
}

int main()
{
    return 0;
}