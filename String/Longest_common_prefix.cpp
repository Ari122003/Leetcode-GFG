#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{

    string com = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        string temp = "";
        for (int j = 0; j < strs[i].size(); j++)
        {

            string x = strs[i];
            char y = x[j];

            if (y == com[j])
            {
                temp += y;
            }
            else
            {
                break;
            }
        }

        com = temp;
    }

    return com;
}
int main()
{
    return 0;
}