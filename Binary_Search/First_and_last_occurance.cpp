#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    int size = nums.size();

    if (size == 0)
    {
        return {-1, -1};
    }

    int start = 0, end = size - 1;

    int lb = size, ub = size;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] >= target)
        {
            lb = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (lb == size || nums[lb] != target)
    {
        return {-1, -1};
    }

    start = 0;
    end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] > target)
        {

            ub = mid;

            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return {lb, ub - 1};
}

int main()
{
    return 0;
}
