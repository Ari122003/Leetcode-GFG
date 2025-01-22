#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n)
{

    int count = 1;

    string base = "1";

    while (count < n)
    {

        char ele = base[0];

        int freq = 0;

        string temp = "";

        for (char ch : base)
        {
            if (ch != ele)
            {
                temp += to_string(freq);
                temp += ele;
                ele = ch;
                freq = 0;
            }

            freq++;
        }

        temp += to_string(freq);
        temp += ele;

        base = temp;

        count++;
    }

    return base;
}
int main()
{
    return 0;
}