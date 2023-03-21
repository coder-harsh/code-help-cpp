//
#include <iostream>
using namespace std;
int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
    {
        cout << b; // true as ++a=11=true
    }
    else
    {
        cout << ++b;
    }
    return 0;
}