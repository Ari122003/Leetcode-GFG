#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, vector<int> &b)
{

    int back = a.size() - 1;

    int front = 0;

    while (front < b.size() && back >= 0)
    {

        if (a[back] > b[front])
        {

            swap(a[back], b[front]);
        }

        front++;
        back--;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}
int main()
{
    return 0;
}