/*
4
A
B C
D E F
G H I J
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n;
    cin >> n;
    char ch = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {

            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }

    return 0;
}