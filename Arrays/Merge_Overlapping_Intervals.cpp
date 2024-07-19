#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());

    ans.push_back(intervals[0]);

    int a = 0;

    for (int i = 1; i < intervals.size(); i++)
    {
        int b = ans[a][1];
        int c = intervals[i][0];
        int d = intervals[i][1];

        if (c <= b && b <= d)
        {
            swap(ans[a][1], d);
        }
        else if (b < c && b < d)
        {
            ans.push_back({c, d});
            a++;
        }
    }

    return ans;
}

int main()
{
    return 0;
}