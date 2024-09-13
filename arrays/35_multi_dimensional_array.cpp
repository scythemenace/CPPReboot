#include <iostream>
using namespace std;

/*A multi dimensional array means an array inside an array. It is used to
denote a matrix with rows and columns*/

int main()
{
    /*First bracket [] denotes rows and second bracket [] denotes columns*/
    int sally[2][3] = {{2, 3, 4}, {8, 9, 10}}; // Two rows and 3 columns

    // 2, 3, 4
    // 8, 9, 10
    // This is how it looks
    cout << sally << endl;
    /*Calling the array like this without telling it the specific element you
    want gives back its memory address because it's a 2D array and CPP
    doesn't know how to print it*/
    /*We can call a multidimensional array in a similar way to a normal
    array but just adding one more bracket*/
    cout << "This is what row 2 colum 3 looks element is: " << sally[1][2];
}