#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> stockBuySell(vector<int> A, int n)
{

    int buy = 0;

    vector<vector<int>> ans;

    for (int i = 1; i < n; i++)
    {

        if (A[i] < A[i - 1])
        {

            if (i - 1 > buy)
            {
                ans.push_back({buy, i - 1});
            }

            buy = i;
        }
    }

    if (buy < n - 1)
        ans.push_back({buy, n - 1});

    return ans;
}
int main()
{
    return 0;
}