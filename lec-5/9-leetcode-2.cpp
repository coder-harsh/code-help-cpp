// no of 1 bits. i.e how many no of 1 bits in a number.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1; // right shift
    }
    cout << count;

    return 0;
}