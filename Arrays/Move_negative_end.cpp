#include <iostream>
#include <vector>

using namespace std;

void segregateElements(vector<int> &arr)
{

    vector<int> pos, neg;

    for (int i : arr)
    {
        if (i >= 0)
        {
            pos.push_back(i);
        }
        else
        {
            neg.push_back(i);
        }
    }

    int count = 0;

    for (int i : pos)
    {
        arr[count++] = i;
    }

    for (int i : neg)
    {
        arr[count++] = i;
    }
}

int main()
{
    return 0;
}