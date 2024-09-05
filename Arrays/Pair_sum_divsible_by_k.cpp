#include <iostream>
#include <vector>
#include <map>

using namespace std;

int numPairsDivisibleByk(vector<int> &time, int k)
{

    int n = time.size();

    map<int, int> hash;

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        int rem = time[i] % k;

        int complement = (k - rem) % k;

        if (hash.find(complement) != hash.end())
        {
            count += hash[complement];
        }

        hash[rem]++;
    }

    return count;
}
int main()
{
    return 0;
}