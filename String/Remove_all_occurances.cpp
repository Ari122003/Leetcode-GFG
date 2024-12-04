#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{

    while (s.find(part) < s.length())
    {
        int pos = s.find(part);

        s.erase(pos, part.length());
    }

    return s;
}
int main()
{
    return 0;
}