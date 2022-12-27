/*
4
1111
 222
  33
   4
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, sp, n;
    cin >> n;
    while (i <= n)
    {
        sp = 1;
        while (sp <= i - 1)
        {
            cout << " ";
            sp++;
        }
        j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}