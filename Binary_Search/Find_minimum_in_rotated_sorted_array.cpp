#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int findMin(vector<int> &nums)
{

    int size = nums.size();

    int low = 0, high = size - 1;

    int ans = INT_MAX;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (nums[mid] >= nums[low])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }

    return ans;
}
int main()
{
    return 0;
}