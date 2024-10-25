#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> mergeOverlap(vector<vector<int>> &arr)
{

    int n = arr.size();

    if (n == 1)
        return arr;

    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    ans.push_back(arr[0]);

    int p = 0;

    for (int i = 1; i < n; i++)
    {

        // Overlap
        if (ans[p][1] >= arr[i][0])
        {
            // swap 2nd of ans to 1st of arr

            int valueToSwap = max(ans[p][1], arr[i][1]);

            swap(ans[p][1], valueToSwap);
        }
        // Not overlap
        else
        {
            ans.push_back(arr[i]);
            p++;
        }
    }

    return ans;
}
int main()
{
    return 0;
}