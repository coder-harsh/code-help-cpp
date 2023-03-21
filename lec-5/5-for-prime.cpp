// prime no with for loop with flag
#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isprime = 1;
    cout << "Enter value of n";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break; // loop ko consider karega nhi sidha bahar aa jayega parent s v. only used in loop or switch.
        }
    }
    if (isprime == 0)
    {
        cout << "Not a prime" << endl;
    }
    else
    {
        cout << "It a prime" << endl;
    }
    return 0;
}