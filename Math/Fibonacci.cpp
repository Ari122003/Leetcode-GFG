#include <bits/stdc++.h>
using namespace std;

int fibo(int i)
{

    if (i <= 1)
    {
        return i;
    }

    return fibo(i - 1) + fibo(i - 2);
}

void print(int term)
{

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 3; i <= term; i++)
    {
        int next = a + b;

        cout << next << " ";

        a = b;
        b = next;
    }
}
int main()
{
    print(15);
    return 0;
}