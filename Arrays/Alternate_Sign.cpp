#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n)
{

    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] >= 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }

    int o = 0, e = 0;
    int index = 0;

    while (o < odd.size() && e < even.size())
    {

        arr[index++] = even[e++];
        arr[index++] = odd[o++];
    }

    while (o < odd.size())
    {
        arr[index++] = odd[o++];
    }

    while (e < even.size())
    {
        arr[index++] = even[e++];
    }
}

int main()
{
    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2, 1, 8, 3, 5};

    rearrange(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "";
    }

    return 0;
}