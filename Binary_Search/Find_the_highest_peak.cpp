#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1 || nums[0] > nums[1])
    {
        return 0;
    }
    else if (nums[n - 1] > nums[n - 2])
    {
        return n - 1;
    }

    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }

        else if (nums[mid - 1] < nums[mid])
        {

            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    return 0;
}