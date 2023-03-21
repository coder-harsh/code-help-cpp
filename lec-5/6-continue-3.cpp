// never terminate
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i--) // 1 0
    {
        cout << i << " "; // 0 1
        i++;
    }

    return 0;
}