#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> leaders(int n, int arr[])
{

    std::vector<int> ans;
    int i = n - 1, j = n - 2;

    while (j >= 0)
    {

        if (arr[j] >= arr[i])
        {
            ans.push_back(arr[j]);

            i = j;
        }

        j--;
    }

    reverse(ans.begin(), ans.end());

    ans.push_back(arr[n - 1]);

    return ans;
}

using namespace std;
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};

    vector<int> ans = leaders(6, arr);

    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}