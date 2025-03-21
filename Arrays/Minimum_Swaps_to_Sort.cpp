#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int> &arr)
{

    vector<pair<int, int>> temp;

    for (int i = 0; i < arr.size(); i++)
    {

        temp.push_back({arr[i], i});
    }

    stable_sort(temp.begin(), temp.end());

    int count = 0;

    for (int i = 0; i < temp.size(); i++)
    {

        pair<int, int> item = temp[i];

        if (item.second != i)
        {
            swap(temp[i], temp[item.second]);
            count++;
            i--;
        }
    }

    return count;
}
int main()
{
    return 0;
}