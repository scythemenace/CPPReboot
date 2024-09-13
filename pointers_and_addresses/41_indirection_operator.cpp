#include <iostream>
using namespace std;
#include "Sally.h"

int main()
{
    Sally sallyobj1;
    sallyobj1.printCrap();

    /*indirection operator or the arrow member selection operator (->)*/
    /*There is a different way to access stuff inside the sally class and
    this is to make a pointer to the sally object*/

    Sally *sallyPointer = &sallyobj1;
    // Sally class is also a data type.
    /*Now we can use the pointer to access stuff inside the class.*/
    // This will result in an error sallyPointer.printCrap();
    sallyPointer->printCrap();
    //-> symbol is used to access stuff inside the class using the pointer
    /*It's not hard to remember because -> is kinda "pointing" and we use it
    with a "pointer"*/
}