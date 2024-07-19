#include <iostream>
#include <vector>

using namespace std;

vector<int> majorityElement(vector<int> &nums)
{

    int e1, e2;
    int c1 = 0, c2 = 0;

    int size = nums.size();

    for (int num : nums)
    {
        if (num == e1)
        {
            c1++;
        }
        else if (num == e2)
        {
            c2++;
        }
        else if (c1 == 0)
        {
            e1 = num;
            c1 = 1;
        }
        else if (c2 == 0)
        {
            e2 = num;
            c2 = 1;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    c1 = 0;
    c2 = 0;

    for (int i : nums)
    {
        if (i == e1)
        {
            c1++;
        }
        else if (i == e2)
        {
            c2++;
        }
    }

    vector<int> ans;

    int mini = (size / 3);

    if (c1 > mini)
    {
        ans.push_back(e1);
    }

    if (c2 > mini && e2 != e1)
    {
        ans.push_back(e2);
    }

    return ans;
}

int main()
{
    return 0;
}