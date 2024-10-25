#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int> &arr)
{

    int maxJump = 0;
    int count = 0;
    int end = 0;
    int n = arr.size();

    if (arr[0] == 0)
        return -1;

    for (int i = 0; i < n - 1; i++)
    {

        maxJump = max(maxJump, i + arr[i]);

        if (i == end)
        {
            count++;
            end = maxJump;
        }

        if (end <= i)
            return -1;

        if (end >= n - 1)
            return count;
    }

    return count;
}
int main()
{
    return 0;
}