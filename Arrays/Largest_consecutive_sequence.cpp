#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestConsecutive(vector<int> &nums)
{

    sort(nums.begin(), nums.end());

    int maxcount = 0;
    int last;
    int count;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] - last == 1)
        {
            count++;
        }
        else if (nums[i] != last)
        {
            count = 1;
        }

        maxcount = max(maxcount, count);
        last = nums[i];
    }
    return maxcount;
}

int main()
{
    return 0;
}