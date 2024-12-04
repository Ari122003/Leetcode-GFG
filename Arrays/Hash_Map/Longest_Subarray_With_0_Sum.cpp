#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &arr)
{

    map<int, int> prefix;

    int sum = 0;

    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if (sum == 0)
            ans = max(ans, i + 1);

        if (prefix.find(sum) != prefix.end())
        {
            ans = max(ans, i - prefix[sum]);
        }
        else
        {
            prefix[sum] = i;
        }
    }

    return ans;
}

int main()
{
    return 0;
}