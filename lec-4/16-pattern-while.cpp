/*
4
A
B C
C D E
D E F G
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
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}