#include <bits/stdc++.h>
using namespace std;

bool valid(string &s)
{
    if (s.size() > 1 && s[0] == '0')
    {
        return false;
    }

    int num = stoi(s);

    if (num >= 0 && num <= 255)
    {
        return true;
    }

    return false;
}

void solve(string &s, string temp, int index, int dotCount, vector<string> &ans)
{

    if (dotCount == 4 && index >= s.size())
    {
        ans.push_back(temp);

        return;
    }

    if (dotCount >= 4)
        return;

    for (int i = 1; i <= 3 && i + index <= s.size(); i++)
    {
        string segment = s.substr(index, i);

        if (valid(segment))
        {
            string newTemp = temp + segment + (dotCount < 3 ? "." : "");
            solve(s, newTemp, index + i, dotCount + 1, ans);
        }
    }
}
vector<string> generateIp(string s)
{
    vector<string> ans;

    solve(s, "", 0, 0, ans);

    return ans;
}
int main()
{
    return 0;
}