#include <bits/stdc++.h>
using namespace std;

int minChar(string &s)
{

    string temp = s;

    reverse(temp.begin(), temp.end());

    string combo = s + "#" + temp;

    int n = combo.length();

    // KMP Algorithm

    vector<int> lps(n, 0);

    int i = 0;
    int j = 1;

    while (j < n)
    {
        if (combo[i] == combo[j])
        {
            lps[j] = i + 1;
            i++;
            j++;
        }
        else
        {
            if (i > 0)
            {
                i = lps[i - 1];
            }
            else
            {
                j++;
            }
        }
    }

    int len = lps[n - 1];

    return s.size() - len;
}
int main()
{
    return 0;
}