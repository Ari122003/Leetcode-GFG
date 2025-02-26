#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{

    char ele = chars[0];
    int count = 0;
    int ans = 0;
    string grp = "";

    int n = chars.size();

    for (int i = 0; i < chars.size(); i++)
    {

        if (chars[i] != ele)
        {

            grp += ele;

            if (count != 1)
            {

                string freq = to_string(count);
                grp += freq;
            }

            ele = chars[i];
            count = 0;
        }

        count++;
    }

    grp += ele;

    if (count != 1)
    {

        string freq = to_string(count);
        grp += freq;
    }

    chars.clear();

    for (char ch : grp)
    {

        chars.push_back(ch);
    }

    return chars.size();
}
int main()
{
    return 0;
}