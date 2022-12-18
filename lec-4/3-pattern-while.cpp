// 3 pattern while
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n, k = 1;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}