/*
4
A B C D
B C D E
C D E F
D E F G
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, j;
    cin >> n;

    while (i <= n)
    {

        j = 1;
        char ch = 'A' + i - 1;
        while (j <= n)
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