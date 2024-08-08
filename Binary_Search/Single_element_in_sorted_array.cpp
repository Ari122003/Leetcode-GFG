#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int size = nums.size();

    if (size == 1)
    {
        return nums[0];
    }
    if (nums[0] != nums[1])
    {
        return nums[0];
    }
    if (nums[size - 1] != nums[size - 2])
    {
        return nums[size - 1];
    }

    int low = 0;
    int high = size - 1;
    int ans;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if ((nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]))
        {
            ans = nums[mid];
            break;
        }

        else if (mid % 2 != 0 && nums[mid] == nums[mid - 1] ||
                 mid % 2 == 0 && nums[mid] == nums[mid + 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}
int main()
{
    return 0;
}