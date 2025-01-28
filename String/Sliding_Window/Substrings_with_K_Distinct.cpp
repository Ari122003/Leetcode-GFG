#include <bits/stdc++.h>
using namespace std;
int solve(string s, int k)
{

    int n = s.length();

    int i = 0, j = 0;

    int count = 0;

    map<char, int> hash;

    while (j < n)
    {

        hash[s[j]]++;

        while (hash.size() > k)
        {
            hash[s[i]]--;
            if (hash[s[i]] == 0)
                hash.erase(s[i]);
            i++;
        }

        count += j - i + 1;
        j++;
    }

    return count;
}

int countSubstr(string &s, int k)
{

    return solve(s, k) - solve(s, k - 1);
}
int main()
{
    return 0;
}