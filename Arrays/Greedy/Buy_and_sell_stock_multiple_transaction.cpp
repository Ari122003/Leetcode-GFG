#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices)
{

    int ans = 0;

    for (int i = 1; i < prices.size(); i++)
    {

        if (prices[i] > prices[i - 1])
        {
            ans += prices[i] - prices[i - 1];
        }
    }

    return ans;
}
int main()
{
    return 0;
}