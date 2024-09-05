#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallest(vector<int> &arr, int k)
{

    priority_queue<int> maxHeap;

    for (int i : arr)
    {
        maxHeap.push(i);
    }

    int popCount = arr.size() - k;

    while (popCount > 0)
    {
        maxHeap.pop();
        popCount--;
    }

    return maxHeap.top();
}

int main()
{
    return 0;
}
