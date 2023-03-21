// fabonacci series: 0 1 1 2 3 5 8 13 21 ....
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        int nxt = a + b;
        cout << nxt << " ";
        a = b;
        b = nxt;
    }

    return 0;
}