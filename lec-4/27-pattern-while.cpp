/*
4
   1
  22
 333
4444
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n, sp;
    cin >> n;
    while (i <= n)
    {
        sp = 1;
        while (sp <= n - i)
        {
            cout << " ";
            sp++;
        }
        j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}