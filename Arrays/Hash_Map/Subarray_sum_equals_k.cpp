#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithSumK(vector<int> &arr, int k)
{
    unordered_map<int, int> prefixSumFreq;
    int sum = 0, count = 0;

    // Initialize with sum 0 appearing once (to handle cases where subarray itself equals k)
    prefixSumFreq[0] = 1;

    for (int num : arr)
    {
        sum += num;

        // Check if (sum - k) exists in the map
        if (prefixSumFreq.find(sum - k) != prefixSumFreq.end())
        {
            count += prefixSumFreq[sum - k];
        }

        // Store/update the frequency of the current prefix sum
        prefixSumFreq[sum]++;
    }

    return count;
}
int main()
{
    return 0;
}