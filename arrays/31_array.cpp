#include <iostream>
using namespace std;

/*An array can store multiple values*/

int main()
{
    /*The number inside the bracket denotes how many numbers do
    you want to have in your array to set aside memory for it*/

    // In this case we've provided all values during instantiation
    int bucky[5] = {66, 75, 2, 43, 99};

    /*Use index to use the value*/
    cout << bucky[0] << endl;
}