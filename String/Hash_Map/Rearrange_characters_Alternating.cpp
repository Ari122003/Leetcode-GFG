#include <bits/stdc++.h>
using namespace std;

string rearrangeString(string s)
{

    int maxFreq = -1;
    char maxChar = '#';

    int n = s.size();

    unordered_map<char, int> freq;
    for (char ch : s)
    {
        freq[ch]++;

        if (freq[ch] > maxFreq)
        {
            maxFreq = freq[ch];
            maxChar = ch;
        }
    }

    if (maxFreq > (n + 1) / 2)
    {
        return "";
    }

    vector<char> temp(n, '#');

    int index = 0;

    while (maxFreq > 0)
    {
        temp[index] = maxChar;

        index += 2;
        maxFreq--;
    }

    freq.erase(maxChar);

    for (char ch = 'a'; ch <= 'z'; ch++)
    {

        while (freq[ch] > 0)
        {

            if (index >= n)
            {
                index = 1;
            }

            temp[index] = ch;
            index += 2;
            freq[ch]--;
        }
    }

    string ans = "";

    for (char ch : temp)
    {
        ans += ch;
    }

    return ans;
}
int main()
{
    return 0;
}