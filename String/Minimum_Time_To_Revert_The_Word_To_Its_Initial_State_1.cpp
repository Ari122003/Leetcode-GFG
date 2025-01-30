#include <bits/stdc++.h>
using namespace std;

int minimumTimeToInitialState(string word, int k)
{

    int count = 0;

    string temp = word;

    for (int i = 0; i < word.length(); i++)
    {

        if ((i + 1) % k == 0)
        {

            count++;

            temp = temp.substr(k);

            if (temp == "")
            {
                return count;
            }

            string check = word.substr(0, temp.length());

            if (temp == check)
            {
                return count;
            }
        }
    }

    return count + 1;
}
int main()
{
    return 0;
}