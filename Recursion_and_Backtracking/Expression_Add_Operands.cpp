#include <bits/stdc++.h>
using namespace std;

void solve(string &num, int &target, int index, vector<string> &ans,
           long curr, long last, string temp)
{

    if (index >= num.size())
    {
        if (curr == target)
        {
            ans.push_back(temp);
        }
        return;
    }

    for (int i = index; i < num.size(); i++)
    {
        string sub = num.substr(index, i - index + 1);

        if (num[index] == '0' && i > index)
        {
            break;
        }
        long result = stol(sub);

        if (index == 0)
        {
            solve(num, target, i + 1, ans, result, result, sub);
        }
        else
        {

            solve(num, target, i + 1, ans, curr + result, result, temp + '+' + sub);
            solve(num, target, i + 1, ans, curr - result, -result, temp + '-' + sub);

            long newCurrValue = (curr - last) + (last * result);
            solve(num, target, i + 1, ans, newCurrValue, last * result, temp + '*' + sub);
        }
    }
}

vector<string> addOperators(string num, int target)
{
    vector<string> ans;
    solve(num, target, 0, ans, 0, 0, "");
    return ans;
}

int main()
{
    return 0;
}