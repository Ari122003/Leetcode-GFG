#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solve(vector<int> nums, int maxpage)
{

    int students = 1;
    int page = 0;

    for (int i : nums)
    {
        if (i + page <= maxpage)
        {
            page += i;
        }
        else
        {
            students++;
            page = i;
        }
    }

    return students;
}

int splitArray(vector<int> &nums, int k)
{

    int size = nums.size();

    if (k > size)
    {
        return -1;
    }

    int sum = 0;
    int maxi = INT_MIN;
    for (int i : nums)
    {
        sum += i;
        maxi = max(maxi, i);
    }

    int low = maxi;
    int high = sum;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        int students = solve(nums, mid);

        if (students > k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low;
}
int main()
{
    return 0;
}