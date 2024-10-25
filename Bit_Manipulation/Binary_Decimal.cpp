#include <bits/stdc++.h>
using namespace std;

string toBinary(int num)
{
    string binary = "";
    while (num > 0)
    {
        int bit = num % 2;

        binary += to_string(bit);

        num = num / 2;
    }

    return binary;
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
    return 0;
}