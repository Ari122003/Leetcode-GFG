#include <bits/stdc++.h>
using namespace std;

void chcker(int sum, string &ans, int &carry)
{
    if (sum == 1)
    {
        ans += '1';
        carry = 0;
    }
    if (sum == 0)
    {
        ans += '0';
        carry = 0;
    }
    if (sum == 2)
    {
        ans += '0';
        carry = 1;
    }

    if (sum == 3)
    {
        ans += '1';
        carry = 1;
    }
}

string addBinary(string &s1, string &s2)
{
    // your code here

    string ans = "";

    int i = s1.size() - 1;

    int j = s2.size() - 1;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {

        int a = s1[i] - '0';
        int b = s2[j] - '0';

        int sum = a + b + carry;

        chcker(sum, ans, carry);

        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = (s1[i] - '0') + carry;
        chcker(sum, ans, carry);
        i--;
    }

    while (j >= 0)
    {
        int sum = (s2[j] - '0') + carry;
        chcker(sum, ans, carry);
        j--;
    }

    if (carry == 1)
    {

        ans += carry + '0';
    }

    reverse(ans.begin(), ans.end());

    int first = ans.find_first_not_of('0');
    if (first == string::npos)
    {
        return "0";
    }

    return ans.substr(first);
}
int main()
{

    return 0;
}