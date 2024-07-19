#include <iostream>
#include <vector>
#include <map>
using namespace std;

int lengthOfLongestSubstring(string s)
{

    int left = 0, right = 0;

    int len = 0;

    map<char, int> hash;

    while (right < s.size())
    {
        if (hash.find(s[right]) != hash.end() && hash[s[right]] >= left)
        {
            left = hash[s[right]] + 1;
        }
        len = max(len, right - left + 1);
        hash[s[right]] = right;

        right++;
    }

    return len;
}

int main()
{
    return 0;
}