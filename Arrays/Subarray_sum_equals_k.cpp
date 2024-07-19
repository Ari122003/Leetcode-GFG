#include <iostream>
#include <vector>
#include <map>

using namespace std;

int subarraySum(vector<int> &nums, int k)
{

    map<int, int> mapi;

    int count = 0, presum = 0;

    mapi[0] = 1;

    for (int i = 0; i < nums.size(); i++)
    {

        presum += nums[i];

        count += mapi[presum - k];

        mapi[presum] += 1;
    }

    return count;
}

int main()
{
    return 0;
}