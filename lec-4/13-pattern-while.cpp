/*4
A B C D
B C D E
C D E F
D E F G
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n;
    cin >> n;

    while (i <= n)
    {
        j = 1;
        char ch = 'A';
        while (j <= n)
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