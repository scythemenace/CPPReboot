#include <iostream>
using namespace std;

int main()
{   
    /*sizeof() function determines somethings size in bytes*/
    char c;
    cout << "size of the character: " << sizeof(c) << endl;
    int a;
    cout << "integer occupies: " << sizeof(int) << endl;
    /*Integer takes up 4 bytes in my PC.
    It takes a different amount of bytes on different PCs so don't freak out
    if you get a different answer*/
    double b;
    cout << "double occupies: " << sizeof(b) << endl;
    /*Double is more precise than int so it may occupy double or more
    bytes than an int. I am expecting 8 bytes but you could have a different
    number*/
    double bucky[10];
    cout << "an array of 10 doubles occupies: " << sizeof(bucky) << endl;
    /*10 doubles, each double takes 8 in my pc so it should give me 80 bytes.*/
    
    /*You can use sizeof() to find out how many elements there are in an array*/
    cout << "number of elements in bucky: " << sizeof(bucky)/sizeof(bucky[0]) << endl;
    /*Why this works is that size of bucky would obv. be 80 as I mentioned and
    size of bucky[0] means the size of the first element in an array. Since the 
    first element in the bucky array is a double and we know that size of
    a double is 8 bytes. We can deduce that 80/8 = 10 i.e. there are 10
    elements in an array.*/

    /*We can even find out number of rows and number of cols in a 2d array*/
    double bucky2d[3][4];

    cout << "number of rows: " << sizeof(bucky2d)/sizeof(bucky2d[0]) << endl;;
    /*Since there are 3 rows, bucky[0] gives us the size of one whole
    row in the 2d array.
    Dividing the total bytes by the size of a whole array.*/
    cout << "number of cols: " << sizeof(bucky2d[0])/sizeof(bucky2d[0][0]);
    /*Now dividing the size of one row, by the bytes of individual elements will
    give us the column*/
}