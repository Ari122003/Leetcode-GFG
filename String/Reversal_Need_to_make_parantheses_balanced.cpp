#include <bits/stdc++.h>
using namespace std;
int countRev(string s)
{
    if (s.length() % 2 != 0)
    {
        return -1;
    }

    int open = 0;
    int closed = 0;

    for (char ch : s)
    {

        if (open == 0 && ch == '}')
        {
            closed++;
        }

        else if (ch == '{')
        {
            open++;
        }
        else
        {
            open--;
        }
    }

    return ((open + 1) / 2) + ((closed + 1) / 2);
}
int main()
{
    return 0;
}