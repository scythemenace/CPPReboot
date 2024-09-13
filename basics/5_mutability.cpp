#include <iostream>
using namespace std;
int main()
{
    /*We'll take about mutability. Whenever you create a variable, your computer
    sets aside a piece of memory to store that value. Whenever you use that
    variable again and set it to a new value your computer will wipe
    out the previous value and make room for new value.*/
    int tuna = 99;
    cout << tuna << endl;
    tuna = 76;
    cout << tuna;
    return 0;
}