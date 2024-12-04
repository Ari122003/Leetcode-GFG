#include <bits/stdc++.h>
using namespace std;

double findEle(vector<int> a, vector<int> b, int pos)
{

    int count = 0;

    int i = 0, j = 0;

    double last;

    while (i < a.size() && j < b.size())
    {

        if (a[i] <= b[j])
        {
            last = (double)a[i];
            i++;
        }
        else
        {
            last = (double)b[j];
            j++;
        }

        count++;

        if (count == pos + 1)
        {
            return last;
        }
    }

    while (i < a.size())
    {
        last = (double)a[i];
        i++;
        count++;
        if (count == pos + 1)
        {
            return last;
        }
    }

    while (j < b.size())
    {
        last = (double)b[j];
        j++;
        count++;

        if (count == pos + 1)
        {
            return last;
        }
    }

    return last;
}

double medianOfSortedArrays(vector<int> &a, vector<int> &b)
{

    int n = a.size() + b.size();

    double median;

    if (n % 2 != 0)
    {
        median = (double)findEle(a, b, n / 2);
    }
    else
    {
        double x = (double)findEle(a, b, n / 2);
        double y = (double)findEle(a, b, n / 2 - 1);

        median = (x + y) / 2;
    }

    return median;
}
int main()
{
    return 0;
}