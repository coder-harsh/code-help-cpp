// increment and decrement
#include <iostream>
using namespace std;
int main()
{
    int i = 4;
    int a = i++;
    cout << a;   // 4
    cout << i;   // 5
    cout << i++; // 5
    cout << i;   // 6
    return 0;
}

/*
i++ post increment
++i pre incremet

i-- post decrement
--i pre decrement
*/