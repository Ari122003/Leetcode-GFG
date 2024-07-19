#include <iostream>
#include <vector>
#include <map>
using namespace std;

int totalFruit(vector<int> &fruits)
{

    int i = 0, j = 0;

    int len = 0;

    map<int, int> hash;

    while (j < fruits.size())
    {
        hash[fruits[j]]++;

        if (hash.size() > 2)
        {
            while (hash.size() > 2)
            {
                hash[fruits[i]]--;

                if (hash[fruits[i]] == 0)
                {
                    hash.erase(fruits[i]);
                }

                i++;
            }
        }

        if (hash.size() <= 2)
        {
            len = max(len, j - i + 1);
        }
        j++;
    }

    return len;
}

int main()
{
    return 0;
}