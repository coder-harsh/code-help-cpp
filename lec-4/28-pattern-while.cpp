/*
4
   1
  23
 456
78910
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n, sp;
    int k = i;
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

            cout << k;
            j++;
            k += 1;
        }
        cout << endl;
        i++;
    }

    return 0;
}