//
#include <iostream>
using namespace std;
int main()
{
    // cout << k; // undefined

    /*
    int a;
    cout << a << endl; // garbage
    a = 4;
    cout << a; // 4

    int a = 3;
    cout << a << endl;
    if (true)
    {
        cout << a << endl; // 3
        int a = 5;         // no error bcs this a is for this scope only
        cout << a << endl; // 5
    }
    cout << a; // 3


    int a = 3;
    cout << a << endl;
    if (true)
    {
        cout << a << endl;
        int b = 5;
        cout << b << endl;
    }
    // cout << b; //'b' was not declared in this scope
    int b = 7;
    cout << b; // 7
    int b = 8; //'int b' previously declared here
     */
    int i = 8;
    for (int i = 0; i < 8; i++)
    {
        cout << "Hi" << endl;
    }

    return 0;
}