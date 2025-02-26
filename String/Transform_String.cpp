#include <bits/stdc++.h>
using namespace std;

int transform(string A, string B)
{
    int n = A.size(), m = B.size();

    if (n != m)
        return -1;

    map<char, int> hash;

    for (char ch : A)
        hash[ch]++;
    for (char ch : B)
    {
        hash[ch]--;
        if (hash[ch] == 0)
            hash.erase(ch);
    }

    if (!hash.empty())
        return -1;

    int i = m - 1;
    int j = i;

    int count = 0;

    while (i >= 0 && j >= 0)
    {
        if (A[i] == B[j])
        {
            i--;
            j--;
        }
        else
        {
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