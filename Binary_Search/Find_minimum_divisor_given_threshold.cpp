#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int solve(vector<int> nums, int divisor)
{
    int sum = 0;

    for (int i : nums)
    {

        sum += (int)ceil((double)i / divisor);
    }

    return sum;
}

int smallestDivisor(vector<int> &nums, int threshold)
{

    int maxi = INT_MIN;

    for (int i : nums)
    {
        maxi = max(maxi, i);
    }

    int low = 1;
    int high = maxi;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int sum = solve(nums, mid);

        if (sum <= threshold)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}
int main()
{
    return 0;
}