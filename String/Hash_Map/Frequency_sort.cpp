#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{

    unordered_map<char, int> hash;

    for (char ch : s)
    {
        hash[ch]++;
    }

    vector<pair<char, int>> freq;

    for (auto item : hash)
    {
        freq.push_back({item.first, item.second});
    }

    sort(freq.begin(), freq.end(),
         [](pair<char, int> a, pair<char, int> b)
         {
             return a.second > b.second;
         });

    string ans = "";

    for (auto item : freq)
    {
        for (int i = 1; i <= item.second; i++)
        {
            ans += item.first;
        }
    }

    return ans;
}
int main()
{
    return 0;
}