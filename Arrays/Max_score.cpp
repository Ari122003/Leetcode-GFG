#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxScore(vector<int> &cardPoints, int k)
{

    int leftsum = 0, rightsum = 0;
    int n = cardPoints.size();
    int ans;

    for (int i = 0; i < k; i++)
    {
        leftsum += cardPoints[i];
        ans = leftsum;
    }

    int r = n - 1;

    for (int i = k - 1; i >= 0; i--)
    {
        leftsum -= cardPoints[i];
        rightsum += cardPoints[r--];

        ans = max(ans, leftsum + rightsum);
    }

    return ans;
}

int main()
{
    return 0;
}