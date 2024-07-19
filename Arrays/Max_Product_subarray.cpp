#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProduct(vector<int> &nums)
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
    return 0;
}