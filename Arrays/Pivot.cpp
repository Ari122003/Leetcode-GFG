#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> &nums)
{

    int sum = 0;

    for (int i : nums)
    {
        sum += i;
    }

    vector<int> leftSum;
    vector<int> rightSum;

    int s = 0;

    for (int i : nums)
    {
        leftSum.push_back(s);
        s += i;
    }

    for (int i : nums)
    {
        sum -= i;
        rightSum.push_back(sum);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (leftSum[i] == rightSum[i])
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    return 0;
}