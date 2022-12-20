/*
4
A B C D
E F G H
I J K L
M N O P
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n;
    char ch = 'A';

    cin >> n;
    while (i <= n)
    {
        j = 1;

        while (j <= n)
        {
            cout << ch << " "; //'A'+j-1
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}