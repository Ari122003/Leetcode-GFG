#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    // If not sorted
    vector<int> twoSum1(vector<int> &nums, int target)
    {
        int size = nums.size();

        map<int, int> mapi;
        vector<int> ans;

        for (int i = 0; i < size; i++)
        {
            if (mapi.find(target - nums[i]) != mapi.end())
            {

                ans.push_back(i);
                ans.push_back(mapi[target - nums[i]]);
            }
            mapi[nums[i]] = i;
        }
        return ans;
    }

    // if sorted
    vector<int> twoSum2(vector<int> &numbers, int target)
    {

        int start = 0, end = numbers.size() - 1;

        while (start < end)
        {
            int sum = numbers[start] + numbers[end];
            if (sum == target)
            {
                return {start + 1, end + 1};
            }
            else if (sum > target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }

        return {};
    }
};

int main()
{
    return 0;
}