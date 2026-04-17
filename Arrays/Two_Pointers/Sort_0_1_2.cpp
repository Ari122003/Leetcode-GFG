#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int size = nums.size();

        int low = 0, mid = 0, high = size - 1;

        while (mid <= high)
        {
            int m = nums[mid];

            if (m == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            if (m == 1)
            {
                mid++;
            }
            if (m == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
int main()
{
    vector<int> v = {1, 2, 1, 2, 0, 1, 2, 0, 0, 1, 2, 0, 1, 2, 0, 1, 1, 0, 0, 2, 2};

    Solution solve;

    solve.sortColors(v);

    for (int i : v)
    {
        cout << i << "";
    }

    return 0;
}