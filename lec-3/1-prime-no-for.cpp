// prime no or not?
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the no:";
    cin >> n;
    for (int i = 2; i < n;)
    {
        if (n % i == 0)
        {
            cout << "Given no is not prime";
            return 0;
        }
        i = i + 1;
    }
    cout << "No is prime";
    return 0;
}