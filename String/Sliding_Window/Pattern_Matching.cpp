#include <bits/stdc++.h>
using namespace std;

vector<int> search(string pattern, string text)
{
    int i = 0;
    int j = pattern.length() - 1;

    vector<int> ans;

    while (j < text.length())
    {

        string sub = text.substr(i, j - i + 1);

        if (sub == pattern)
        {
            ans.push_back(i + 1);
        }

        i++;
        j++;
    }

    return ans;
}
int main()
{
    return 0;
}