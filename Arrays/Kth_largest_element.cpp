#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{

    priority_queue<int> maxHeap;

    for (int i : nums)
    {
        maxHeap.push(i);
    }

    while (k > 1)
    {
        maxHeap.pop();
        k--;
    }

    return maxHeap.top();
}
int main()
{
    return 0;
}