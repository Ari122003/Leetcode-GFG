#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{

    unordered_map<char, int> hash1;
    unordered_map<char, int> hash2;

    for (int i = 0; i < s.length(); i++)
    {

        if (hash1.count(s[i]) && hash1[s[i]] != t[i])
        {
            return false;
        }
        if (hash2.count(t[i]) && hash2[t[i]] != s[i])
        {
            return false;
        }

        hash1[s[i]] = t[i];
        hash2[t[i]] = s[i];
    }

    return true;
}
int main()
{
    return 0;
}