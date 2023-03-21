//
#include <iostream>
using namespace std;
int main()
{
    int a = 1;   // 2//3
    int b = a++; // 1
    int c = ++a; // 3
    cout << b;   // 1
    cout << c;   // 3
    return 0;
}