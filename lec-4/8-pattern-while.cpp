/*4
1
2 1
3 2 1
4 3 2 1 with taking a value(k) and print i in decresing order
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, k, n;
    cin >> n;
    while (i <= n)
    {
        k = i, j = 1;
        while (j <= i)
        {
            cout << k << " ";
            k--;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}