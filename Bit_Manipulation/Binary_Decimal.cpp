#include <bits/stdc++.h>
using namespace std;

int toBinary(int num)
{
    string binary = "";
    while (num > 0)
    {
        int bit = num % 2;

        binary += to_string(bit);

        num = num / 2;
    }

    reverse(binary.begin(), binary.end());

    return stoi(binary);
}

int toDecimal(string bin)
{
    int dec = 0;

    reverse(bin.begin(), bin.end());

    for (int i = 0; i < bin.length(); i++)
    {

        if (bin[i] == '1')
        {
            dec += pow(2, i);
        }
    }

    return dec;
}

int main()
{
    string s = "1011";
    cout << toDecimal(s);

    return 0;
}