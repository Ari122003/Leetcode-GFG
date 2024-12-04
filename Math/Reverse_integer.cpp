#include<bits/stdc++.h>
using namespace std;

 int reverse(int x) {

        int num = x;

        double rev = 0;

        while (num != 0) {

            int digit = num % 10;

            num /= 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            rev = rev * 10 + digit;
        }

        return rev;
    }
int main()
{
 return 0;
}