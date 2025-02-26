#include <bits/stdc++.h>
using namespace std;
static bool cust(string &a, string &b)
{
    if (a + b > b + a)
    {
        return true;
    }
    return false;
}

string largestNumber(vector<int> &nums)
{

    vector<string> temp;

    for (int i : nums)
    {
        temp.push_back(to_string(i));
    }

    sort(temp.begin(), temp.end(), cust);
    if (temp[0] == "0")
        return "0";

    string ans = "";

    for (auto ele : temp)
    {
        ans += ele;
    }

    return ans;
}
int main()
{
    return 0;
}