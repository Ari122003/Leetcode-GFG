#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{

    int count = 1;
    int index = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count <= 2)
        {
            nums[index] = nums[i];
            index++;
        }
    }

    return index;
}
int main()
{
    return 0;
}