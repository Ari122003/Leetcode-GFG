#include <bits/stdc++.h>
using namespace std;

void count(vector<int> &arr, int &start, int &end, int &mid, int &ans)
{

    int i = start, j = mid + 1;

    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            ans += mid - i + 1;
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + start] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int start, int end, int &ans)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid, ans);

    mergeSort(arr, mid + 1, end, ans);

    count(arr, start, end, mid, ans);
}
// Function to count inversions in the array.
int inversionCount(vector<int> &arr)
{
    int ans = 0;
    mergeSort(arr, 0, arr.size() - 1, ans);

    return ans;
}
int main()
{
    return 0;
}