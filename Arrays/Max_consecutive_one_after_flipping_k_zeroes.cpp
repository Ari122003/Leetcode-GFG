#include <iostream>
#include <vector>
using namespace std;

int longestOnes(vector<int> nums, int k)
{

    int l = 0, r = 0;

    int maxlen = 0;
    int zero = 0;

    while (r < nums.size())
    {
        if (nums[r] == 0)
        {
            zero++;
        }
        if (zero > k)
        {
            if (nums[l] == 0)
                zero--;
            l++;
        }

        if (zero <= k)
        {

            maxlen = max(maxlen, r - l + 1);
        }

        r++;
    }
    return maxlen;
}
int main()
{
    vector<int> v = {1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0};
    int ans = longestOnes(v, 1.0);
    cout << ans;
    return 0;
}