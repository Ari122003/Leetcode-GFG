#include <iostream>
#include <map>
using namespace std;

int getMax(map<char, int> mpp)
{
    int freq = -1;

    for (auto i : mpp)
    {
        freq = max(freq, i.second);
    }

    return freq;
}

int characterReplacement(string s, int k)
{

    int maxlen = 0;
    int maxfreq = 0;

    int i = 0, j = 0;

    map<char, int> hash;

    while (j < s.size())
    {
        hash[s[j]]++;
        maxfreq = getMax(hash);

        int len = j - i + 1;

        if (len - maxfreq > k)
        {
            hash[s[i]]--;
            if (hash[s[i]] == 0)
            {
                hash.erase(s[i]);
            }
            i++;
        }

        maxlen = max(maxlen, j - i + 1);
        j++;
    }

    return maxlen;
}

int main()
{
    return 0;
}