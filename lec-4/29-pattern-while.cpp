//
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, k, sp, n;
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
            cout << j;
            j++;
        }
        k = 1;
        while (k <= i - 1)
        {
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }

    return 0;
}