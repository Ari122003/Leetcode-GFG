#include <iostream>
#include <vector>

using namespace std;
int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int mini = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {
        int p = prices[i] - mini;

        profit = max(profit, p);

        mini = min(mini, prices[i]);
    }

    return profit;
}
int main()
{
    return 0;
}