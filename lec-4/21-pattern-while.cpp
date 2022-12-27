/* with printing space
 4
 * * * *
 * * *
 * *
 *
 */
#include <iostream>
using namespace std;
int main()
{
    int i = 0, j, n, space = 0;
    cin >> n;
    while (i < n)
    {
        j = 0;
        while (j < n - i)
        {
            cout << "*"
                 << " ";
            j++;
        }
        space = 0;
        while (space < i)
        {
            cout << " ";
            space++;
        }
        cout << endl;
        i++;
    }

    return 0;
}