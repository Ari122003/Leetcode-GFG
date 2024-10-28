#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr)
{

    int n = arr.size();

    // get the pivot

    int pivot = -1;

    for (int j = n - 2; j >= 0; j--)
    {

        if (arr[j] < arr[j + 1])
        {
            pivot = j;
            break;
        }
    }

    if (pivot == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    // Find the element which is just greater that pivot , from pivot+1 to n-1

    int nextGreater;

    for (int i = n - 1; i > pivot; i--)
    {

        if (arr[i] > arr[pivot])
        {
            nextGreater = i;
            break;
        }
    }

    // swap nextGreater with pivot

    swap(arr[nextGreater], arr[pivot]);

    // Reverse the array after pivot

    int i = pivot + 1;
    int j = n - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    return 0;
}