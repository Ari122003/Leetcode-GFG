#include <bits/stdc++.h>
using namespace std;
bool subArrayExists(vector<int> arr, int k)
{

    set<int> hash;

    int sum = 0;

    for (int i : arr)
    {

        sum += i;

        if (sum == k || hash.find(sum - k) != hash.end())
        {
            return true;
        }

        hash.insert(sum);
    }

    return false;
}
int main()
{
    return 0;
}