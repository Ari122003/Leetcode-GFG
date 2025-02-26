#include <bits/stdc++.h>
using namespace std;
std::string multiply(string num1, string num2)
{

    int s1 = num1.size();
    int s2 = num2.size();
    vector<int> n1(s1, 0), n2(s2, 0);

    for (int i = 0; i < s1; i++)
    {
        int num = num1[i] - '0';

        n1[i] = num;
    }

    for (int i = 0; i < s2; i++)
    {
        int num = num2[i] - '0';

        n2[i] = num;
    }

    vector<int> mul(s1 + s2, 0);

    for (int i = s1 - 1; i >= 0; i--)
    {
        for (int j = s2 - 1; j >= 0; j--)
        {
            int product = n1[i] * n2[j];
            int sum = product + mul[i + j + 1];

            mul[i + j + 1] = sum % 10; // Store the single digit
            mul[i + j] += sum / 10;    // Carry to the previous position
        }
    }

    while (!mul.empty() && mul[0] == 0)
    {
        mul.erase(mul.begin());
    }

    string ans = "";

    for (int digit : mul)
    {

        ans += (digit + '0');
    }

    return ans;
}
int main()
{
    cout << multiply("12", "12");
    return 0;
}