#include <iostream>
using namespace std;
int main()
{
    int x = 8 - 4; //We can do arithmetic while assigning int to a variable
    int y = 8 * 4;
    int z = 81 / 3;
    int o = 81 / 2;
    /* The division operator returns the floor division of the number and doesn't
    give the remainder, just the divisor.
    */
    //To get the remainder we use the modulo operator
    int k = 81 % 2;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    /*We can use the modulo to check if something is divisible by something
    because if something's divisible by some number the remainder should be 0.*/
    cout << "The divisor is " << o << " and the remainder is " << k << endl;

    /*C++ also follows the order of precedence*/
    int j = 6 * 4 + 8 * 4 + 9 / 20;
    cout << "Without brackets " << j <<endl;
    // brackets are given priority
    int d = 6 * (4 + 8) * (4 + 9) / 20;
    cout << "It is like this with brackets " << d << endl;
    return 0;
}