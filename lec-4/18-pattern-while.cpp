// same as 13 no pattern with 'A'+i+j-2 and like 19
/*3
A B C
B C D
C D E
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 0, n, j;
    cin >> n;

    while (i < n)
    {
        char ch = 'A';
        j = 1;
        ch += i;
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