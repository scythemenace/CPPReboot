#include <iostream>
using namespace std;

void printCrap(int x) /*Any int we enter in the paranthesis will be stored in
x now.*/
{
    cout << "Bucky's favorite number is " << x << endl;
}

int main()
{
    printCrap(854);
    /*Since I know it needs one integer in order to work, that is why
    I added 10 as a parameter to printCrap()*/
    return 0;
}