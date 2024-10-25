#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int> &arr)
{

    set<int> filter;

    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); i++)
    {

        if (arr[i] == arr[i - 1])
        {
            filter.insert(arr[i]);
        }
    }

    vector<int> ans(filter.begin(), filter.end());

    return ans;
}
int main()
{
    return 0;
}