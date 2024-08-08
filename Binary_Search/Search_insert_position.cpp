#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{

    int l = 0, r = nums.size() - 1;

    int lb = nums.size();

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (nums[mid] >= target)
        {
            lb = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return lb;
}

int main()
{
    return 0;
}