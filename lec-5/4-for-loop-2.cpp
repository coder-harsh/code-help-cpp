// we can give more than 1 initiliazation, condition and updation
#include <iostream>
using namespace std;
int main()
{
    for (int a = 0, b = 1; a >= 0 && b >= 1; a--, b--)
    {
        cout << a << " " << b;
    }
    return 0;
}