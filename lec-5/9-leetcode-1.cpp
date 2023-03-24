// diff b/w product of digit of no to sum of digit of a number. but in leetcode it will work on binary no as n will be unsigned integer.
#include <iostream>
using namespace std;
int main()
{
    // int n, a, b, res;
    // cin >> n;
    // a = n % 10;
    // n = n / 10;
    // b = n % 10;
    // n = n / 10;
    // res = (a * b * n) - (a + b + n);
    // cout << res;
    // return 0;
    int n, prod = 1, sum = 0;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int ans = prod - sum;
    cout << ans;
}