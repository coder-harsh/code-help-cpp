//
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage 1 inside if";
    }
    else
    {
        cout << "Stage 2 inside else";
    }
    return 0;
}