#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2)
{

    if (s1.size() > s2.size())
        return false;

    map<char, int> map1;
    map<char, int> map2;

    for (char ch : s1)
    {
        map1[ch]++;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        map2[s2[i]]++;
    }

    int i = 0;
    int j = s1.length() - 1;

    while (j < s2.length())
    {
        if (map1 == map2)
        {
            return true;
        }

        map2[s2[i]]--;

        if (map2[s2[i]] == 0)
        {
            map2.erase(s2[i]);
        }

        i++;
        j++;

        if (j < s2.length())
        {

            map2[s2[j]]++;
        }
    }

    return false;
}
int main()
{
    return 0;
}