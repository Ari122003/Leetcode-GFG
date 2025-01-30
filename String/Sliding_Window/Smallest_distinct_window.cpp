#include <bits/stdc++.h>
using namespace std;

int findSubString(string &s)
{

    int n = s.length();

    int i = 0, j = 0;

    map<char, int> hash;

    set<char> type;

    for (char ch : s)
    {
        type.insert(ch);
    }

    int size = type.size();

    int window = INT_MAX;

    while (j < n)
    {

        hash[s[j]]++;

        while (hash.size() == size)
        {

            window = min(window, j - i + 1);

            hash[s[i]]--;

            if (hash[s[i]] == 0)
            {
                hash.erase(s[i]);
            }
            i++;
        }

        j++;
    }

    return window;
}
int main()
{
    string s = "abcdefg";
    cout << s.substr(3);
    return 0;
}