/*
5
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
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
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}