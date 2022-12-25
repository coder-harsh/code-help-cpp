/*4
D
C D
B C D
A B C D
*/
#include <iostream>
using namespace std;
int main()
{
    int a, n, i = 1, j;
    cin >> n;

    while (i <= n)
    {
        j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {

            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}