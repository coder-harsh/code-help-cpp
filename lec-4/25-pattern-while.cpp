/*last star should be in same line: 53:50
4
****
 ***
  **
   *
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n;
    cin >> n;
    while (i <= n)
    {
        int space = 1;
        while (space <= i - 1)
        {
            cout << " ";
            space++;
        }
        j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}