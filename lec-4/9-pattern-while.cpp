/*4
1
2 1
3 2 1
4 3 2 1 without taking a value(k) and print i in decresing order
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
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}