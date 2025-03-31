#include <bits/stdc++.h>
using namespace std;

bool solve(string &s, unordered_set<string> &dic, int index,
           vector<int> &dp)
{
    if (index >= s.size())
    {
        return true;
    }

    if (dp[index] != -1)
        return dp[index];

    for (int len = 1; len <= s.size(); len++)
    {
        string part = s.substr(index, len);

        if (dic.count(part) && solve(s, dic, index + len, dp))
        {
            return dp[index] = true;
        }
    }

    return dp[index] = false;
}

bool wordBreak(string s, vector<string> &wordDict)
{
    if (find(wordDict.begin(), wordDict.end(), s) != wordDict.end())
    {
        return true;
    }

    unordered_set<string> wordSet(wordDict.begin(), wordDict.end());

    vector<int> dp(s.size(), -1);
    return solve(s, wordSet, 0, dp);
}

int main()
{
    return 0;
}