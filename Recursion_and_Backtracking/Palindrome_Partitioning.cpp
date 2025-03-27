#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}
void solve(string s, int i, vector<string> partitions,
           vector<vector<string>> &ans)
{
    if (i >= s.size())
    {

        ans.push_back(partitions);

        return;
    }

    for (int j = i; j < s.size(); j++)
    {
        string part = s.substr(i, j - i + 1);

        if (isPalindrome(part))
        {
            partitions.push_back(part);
            solve(s, j + 1, partitions, ans);
            partitions.pop_back();
        }
    }
}

vector<vector<string>> partition(string s)
{
    vector<string> store;
    vector<vector<string>> ans;
    solve(s, 0, store, ans);

    return ans;
}
int main()
{
    return 0;
}