#include <iostream>
using namespace std;

/*another way to create an array using loops*/

int main()
{
    int bucky[9];

    cout << "Element  -  Value" << endl;

    for (int x = 0; x <= 8; x++)
    {
        // x is the index in this case
        bucky[x] = 99;
        cout << x << "   -----   " << bucky[x] << endl;
    }

    // Another alternative way to create an array is written below
    int altBucky[] = {1, 2, 3};
    /*In this case we don't define the amount of elements the array will hold,
    BUT REMEMBER this method is only valid since we are giving it the array values
    on instantiation. We can't do this randomly without giving the array the values
    on creation. Basically, it needs some way to know the number of elements it's
    required to hold, either by manually inputting it on declaration or keeping
    that empty but giving it some values on instantiation */

    for (int x = 0; x <= 2; x++)
    {
        cout << "alt " << x << "   -----   " << altBucky[x] << endl;
    }
}