#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{

    if (s.length() != goal.length())
        return false;
    string allRotation = s + s;

    if (allRotation.find(goal) != string::npos)
    {
        return true;
    }

    return false;
}
int main()
{
    return 0;
}