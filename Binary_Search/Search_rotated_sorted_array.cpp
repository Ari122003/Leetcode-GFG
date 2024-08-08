#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> nums, int target)
{

    int n = nums.size();

    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        // If has duplicate
        // ,,
        if (nums[l] == nums[mid] && nums[mid] == nums[r])
        {
            l++;
            r--;
            continue;
        }
        // ,,

        else if (nums[mid] >= nums[l])
        {
            if (nums[l] <= target && target <= nums[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        else
        {
            if (nums[mid] <= target && target <= nums[r])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> v = {
        5,
        6,
        6,
        7,
        8,
        1,
        1,
        2,
        3,
        4,
        4,
    };
    cout << search(v, 1);
    return 0;
}