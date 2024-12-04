#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{

    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++)
    {
        hash[a1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {

        if (hash[a2[i]] > 0)
        {
            hash[a2[i]]--;
        }
        else
        {
            return "No";
        }
    }

    return "Yes";
}
int main()
{
    return 0;
}