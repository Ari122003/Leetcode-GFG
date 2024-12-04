#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Without sorting

vector<vector<int>> threeSum(vector<int> &nums)
{

    int n = nums.size();

    set<vector<int>> uni;

    for (int i = 0; i < n; i++)
    {
        set<int> hash;

        for (int j = i + 1; j < n; j++)
        {
            int k = -(nums[i] + nums[j]);
            if (hash.find(k) != hash.end())
            {
                vector<int> temp = {nums[i], nums[j], k};
                sort(temp.begin(), temp.end());
                uni.insert(temp);
            }
            hash.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(uni.begin(), uni.end());
    return ans;
}

// Using sort

vector<vector<int>> threeSumSorting(vector<int> &nums)
{

    int n = nums.size();

    sort(nums.begin(), nums.end());
    set<vector<int>> hash;

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum == 5)
            {
                hash.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if (sum > 5)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    vector<vector<int>> ans(hash.begin(), hash.end());

    return ans;
}
int main()
{

    vector<int> nums = {1, 1, 2, 2, 2, 2};
    vector<vector<int>> result = threeSumSorting(nums);
    for (auto &v : result)
    {
        for (int &i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}