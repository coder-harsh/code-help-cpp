// prime no or not?
#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cout << "Enter the no:";
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "No is not prime";
            return 0;
        }
        i = i + 1;
    }
    cout << "No is prime";
    return 0;
}