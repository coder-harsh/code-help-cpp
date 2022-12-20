/*4
A B C D
A B C D
A B C D
A B C D
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n;
    char ch;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        ch = 'A';
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