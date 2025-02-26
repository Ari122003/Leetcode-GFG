#include <bits/stdc++.h>

vector<vector<string>> anagrams(vector<string> &arr)
{

    vector<vector<string>> result;
    unordered_map<string, vector<string>> hash;

    for (string s : arr)
    {

        string check = s;

        sort(check.begin(), check.end());

        hash[check].push_back(s);
    }

    for (auto item : hash)
    {

        vector<string> anagrams = item.second;

        result.push_back(anagrams);
    }

    return result;
}
using namespace std;
int main()
{
    return 0;
}