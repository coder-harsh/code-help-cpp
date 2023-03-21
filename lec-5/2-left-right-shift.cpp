// left and right shift
#include <iostream>
using namespace std;
int main()
{
    int a = 17 >> 1; // 8
    int b = 17 >> 2; // 4
    int c = 19 << 1; // 38
    int d = 21 << 2; // 84
    cout << a << endl
         << b << endl
         << c << endl
         << d;
    return 0;
}

/* 1 is set bit
in <<,>> padding will be 0000 for +ve and for -ve no it depands on compiler
 padding: shift hone k bad blank m kya fill hoga

17>>1: 17/2*1: 8 //left shift: divide by 2
17>>2: 17/2*2: 4
19<<1: 19*2*1: 38 //right shift: multiply by 2
21<<2: 21*2*2: 84
*/
