#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{

    int maxJumpIndex = 0;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {

        if (i > maxJumpIndex)
            return false;

        maxJumpIndex = max(maxJumpIndex, i + nums[i]);

        if (maxJumpIndex >= n - 1)
            return true;
    }

    return false;
}
int main()
{
    return 0;
}