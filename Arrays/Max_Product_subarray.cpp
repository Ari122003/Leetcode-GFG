#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Solution 1

int maxProduct1(vector<int> &arr)
{

    int mini = -1;
    int maxi = 1;

    int ans = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            mini = 1;
            maxi = 1;
            continue;
        }
        mini *= arr[i];
        maxi *= arr[i];

        ans = max(ans, max(mini, maxi));
    }
    return ans;
}

// Solution 2

int maxProduct2(vector<int> &nums)
{

    long long prod = INT_MIN;
    long long prefix = 1, suffix = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (prefix == 0)
        {
            prefix = 1;
        }
        prefix = (long long)prefix * nums[i];
        prod = max(prod, prefix);
    }

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (suffix == 0)
        {
            suffix = 1;
        }
        suffix = (long long)suffix * nums[i];
        prod = max(prod, suffix);
    }

    return prod;
}
int main()
{
    vector<int> arr = {2, 3, -2, 4};
    cout << maxProduct1(arr) << endl;
    return 0;
}