#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getPairs(vector<int> &arr)
{

    set<int> seen;

    set<vector<int>> hash;

    for (int ele : arr)
    {

        if (seen.count(-ele) == 1)
        {

            int a = max(ele, -ele);
            int b = min(ele, -ele);

            hash.insert({b, a});
        }

        seen.insert(ele);
    }

    vector<vector<int>> ans(hash.begin(), hash.end());

    return ans;
}
int main()
{
    return 0;
}