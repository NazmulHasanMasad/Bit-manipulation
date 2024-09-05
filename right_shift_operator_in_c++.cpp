// C++ Program to demonstrate
// use of right-shift operator
#include <iostream>
#include <cmath>
using namespace std;

// Driver code
int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;

    // The result is 00000010
    cout << "a>>1 = " << (a >> 1) << endl;

    // The result is 00000100
    cout << "b>>1 = " << (b >> 1) << endl;

    // left shift for negative value
    cout << "2 << -5 = " << (2 << -5) << endl;

    //    right shift for negative value
    cout << "2 >> -5 = " << (2 >> -5) << endl;

    // left shift by 65 digits
    cout << "3 << 65 = " << (3 << 65) << endl;

    cout << "2^5 using pow() function =" << pow(2, 5) << endl;

    cout << "2^5 using leftshift = " << (1 << 5) << endl;

    return 0;
}
