#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> arr)
{
    int sum = 0;

    for (int e : arr)
    {
        sum += e;
    }

    return sum;
}
void solve(vector<int> arr, int i, vector<int> &ans, vector<int> temp)
{
    if (i >= arr.size())
    {
        ans.push_back(sum(temp));

        return;
    }

    // exclude

    solve(arr, i + 1, ans, temp);

    // include

    temp.push_back(arr[i]);
    solve(arr, i + 1, ans, temp);
}

vector<int> subsetSums(vector<int> &arr)
{
    vector<int> temp, ans;

    solve(arr, 0, ans, temp);

    return ans;
}
int main()
{
    return 0;
}