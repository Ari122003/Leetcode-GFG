#include <bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int> &array, int a, int b)
{
    int low = 0;

    int curr = 0;

    int high = array.size() - 1;

    while (curr <= high)
    {

        if (array[curr] < a)
        {
            swap(array[curr], array[low]);
            low++;
            curr++;
        }

        else if (array[curr] >= a && array[curr] <= b)
        {
            curr++;
        }
        else
        {
            swap(array[curr], array[high]);
            high--;
        }
    }
}
int main()
{
    return 0;
}