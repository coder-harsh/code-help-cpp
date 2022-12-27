/* without printing space
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
    int i = 0, j, n;
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
        cout << endl;
        i++;
    }

    return 0;
}