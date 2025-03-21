#include <bits/stdc++.h>
using namespace std;
double dist(int a, int b, int c, double x, const vector<pair<int, int>> &p)
{
    double y = (-a * x - c) / (double)b; // Calculate corresponding y using line equation
    double sum = 0;

    for (const auto &i : p)
    {
        sum += sqrt(pow(x - i.first, 2) + pow(y - i.second, 2));
    }
    return sum;
}

double findOptimumCost(tuple<int, int, int> l, vector<pair<int, int>> p, int n)
{
    double left = INT_MAX, right = INT_MIN;
    int a, b, c;
    tie(a, b, c) = l;

    // Determine the search range from x-coordinates of the given points
    for (const auto &item : p)
    {
        left = min(left, (double)item.first);
        right = max(right, (double)item.first);
    }

    // Expand the search range slightly to ensure the correct minimum is found
    left -= 10;
    right += 10;

    // Ternary Search to find the minimum total distance
    while (right - left > 1e-7)
    { // Higher precision
        double mid1 = left + (right - left) / 3;
        double mid2 = right - (right - left) / 3;

        double d1 = dist(a, b, c, mid1, p);
        double d2 = dist(a, b, c, mid2, p);

        if (d1 < d2)
        {
            right = mid2; // Move left
        }
        else
        {
            left = mid1; // Move right
        }
    }

    // Return the minimum distance at the final best x-position
    return dist(a, b, c, (left + right) / 2, p);
}

int main()
{
    return 0;
}