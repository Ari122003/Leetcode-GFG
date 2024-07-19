#include <iostream>
#include <vector>

using namespace std;

vector<int> getRow(int rowIndex)
{

    vector<int> ans;

    long long prod = 1;
    ans.push_back(1);

    for (int i = 1; i <= rowIndex; i++)
    {
        prod = (prod * (rowIndex + 1 - i) / i);
        ans.push_back(prod);
    }

    return ans;
}
int main()
{
    return 0;
}