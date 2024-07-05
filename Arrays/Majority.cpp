#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int size = nums.size();
        int count = 0, ele;

        for (int i = 0; i < size; i++)
        {

            if (count == 0)
            {
                count = 1;
                ele = nums[i];
            }

            else if (nums[i] == ele)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        count = 0;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == ele)
                count++;
        }
        if (count > (size / 2))
            return ele;
        return -1;
    }
};

int main()
{
    vector<int> v = {1, 1, 3};

    Solution solve;

    int ele = solve.majorityElement(v);
    cout << ele;

    return 0;
}