#include <iostream>
using namespace std;

int numberOfSubstrings(string s)
{

    int a = -1, b = -1, c = -1;

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            a = i;
        if (s[i] == 'b')
            b = i;
        if (s[i] == 'c')
            c = i;

        if (a != -1 && b != -1 && c != -1)
        {
            count++;
            count = count + min(a, min(b, c));
        }
    }

    return count;
}

int main()
{
    return 0;
}