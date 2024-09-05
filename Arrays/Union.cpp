#include <iostream>
#include <vector>
#include <set>

using namespace std;

int doUnion(vector<int> arr1, vector<int> arr2)
{

    set<int> uni;

    for (int i : arr1)
    {

        uni.insert(i);
    }
    for (int i : arr2)
    {

        uni.insert(i);
    }

    return uni.size();
}

int main()
{
    return 0;
}