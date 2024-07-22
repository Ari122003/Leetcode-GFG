
#include <iostream>
using namespace std;

int lower(int *arr, int n, int k)
{

    int start = 0, end = n - 1;

    int lb;
    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (arr[mid] >= k)
        {
            lb = arr[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return lb;
}

int upper(int arr[], int n, int k)
{
    int start = 0, end = n - 1;

    int rb;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] <= k)
        {
            rb = arr[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return rb;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    cout << lower(arr, 10, 11);
    cout << upper(arr, 10, 11);
    return 0;
}