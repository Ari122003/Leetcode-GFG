#include <bits/stdc++.h>
using namespace std;

string solve(string str)
{
    string presux = "";
    int size = str.size();

    int i = 0;

    while (i < size / 2 && str[i] == str[size - i - 1])
    {
        presux += str[i];
        cout << "Comparing: " << str[i] << " and " << str[size - i - 1] << endl;
        i++;
    }

    return presux;
}
int main()
{
    string str = "abcxyzabc";
    // cout << str.size() << endl;

    // cout << str.substr(str.size() - 5) << endl;
    // cout << str.substr(0, 2);

    cout << solve(str);
    return 0;
}