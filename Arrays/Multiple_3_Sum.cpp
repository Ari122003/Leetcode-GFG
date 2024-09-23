#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    if (r > n)
        return 0; // Ensure r <= n
    if (r == 0 || n == r)
        return 1; // Base cases

    long long res = 1; // Use long long to prevent overflow

    // Compute nCr using an iterative approach with modulo
    for (int i = 1; i <= r; ++i)
    {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int threeSumMulti(vector<int> &arr, int target)
{

    int n = arr.size();
    sort(arr.begin(), arr.end());
    set<vector<int>> hash;
    map<int, int> freq;

    for (int i : arr)
    {
        freq[i]++;
    }

    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];

            if (sum == target)
            {
                hash.insert({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (sum < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    int count = 0;

    for (auto item : hash)
    {

        vector<int> sub = item;

        int a = sub[0];
        int b = sub[1];

        int c = sub[2];

        if (a == b && b == c && freq[a] >= 3)
        {
            count += nCr(freq[a], 3);
        }
        else if (a == b && b != c && freq[a] >= 2)
        {
            count += nCr(freq[a], 2) * freq[c];
        }
        else if (a != b && b == c && freq[b] >= 2)
        {
            count += freq[a] * nCr(freq[b], 2);
        }
        else
        {
            count += freq[a] * freq[b] * freq[c];
        }
    }

    return count;
}
int main()
{
    return 0;
}