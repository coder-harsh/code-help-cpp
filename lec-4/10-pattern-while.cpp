/*4
A A A A
B B B B
C C C C
D D D D
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
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}