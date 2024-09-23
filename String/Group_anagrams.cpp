#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{

    if (strs.size() == 1)
    {
        return {{strs[0]}};
    }

    map<string, vector<string>> hash;

    for (auto s : strs)
    {

        string sorted = s;

        sort(sorted.begin(), sorted.end());
        hash[sorted].push_back(s);
    }

    vector<vector<string>> ans;

    for (auto item : hash)
    {
        ans.push_back(item.second);
    }

    return ans;
}

int main()
{
    return 0;
}
