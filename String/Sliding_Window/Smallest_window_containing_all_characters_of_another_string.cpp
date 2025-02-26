#include <bits/stdc++.h>
using namespace std;

string smallestWindow(string &s1, string &s2)
{

    map<char, int> hash2;

    for (char ch : s2)
    {
        hash2[ch]++;
    }

    map<char, int> hash1;

    int match = 0;

    int len = INT_MAX;
    int start = 0;

    int i = 0;

    for (int j = 0; j < s1.size(); j++)
    {

        char curr = s1[j];
        hash1[curr]++;

        if (hash2.count(curr) && hash2[curr] == hash1[curr])
        {

            match++;
        }

        while (match == hash2.size())
        {

            int window = j - i + 1;

            if (window < len)
            {
                len = window;
                start = i;
            }

            char left = s1[i];
            hash1[left]--;

            if (hash1[left] == 0)
            {
                hash1.erase(left);
            }

            if (hash2.count(left) && hash1[left] < hash2[left])
            {
                match--;
            }

            i++;
        }
    }

    if (len == INT_MAX)
    {
        return "";
    }

    return s1.substr(start, len);
}
int main()
{
    return 0;
}