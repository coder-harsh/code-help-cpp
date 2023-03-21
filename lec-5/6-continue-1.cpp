//
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hi" << endl;
        cout << "Hello" << endl;
        continue;
        cout << "Hello world"; // ye 5 bar loop chyalne p v print nhi hoga
    }

    return 0;
}