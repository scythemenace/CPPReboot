#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
    int x = 3;
    x = 5;
    // x is mutable and you can change it.
    /*The constant keyword tells your compiler to allow you to not change
    your variable*/
    const int y = 4; // Cannot be changed

    /*You can use const with objects as well.*/
    /*You cannot call regular functions with a constant object. You can
    only call "constant" functions with a constant object.*/

    /*Check Sally.cpp and Sally.h for more [I have written somewhere that particular
    line belongs to this tutorial file]*/
    Sally sallyobj1;
    const Sally sallyobj2;
    sallyobj1.printShizz();
    // sallyob2.printShizz(); <- this won't run!!!! because it is not a constant func
    sallyobj2.constantprintSizz();

    /*Remember deconstructors from tutorial 43. Since we have two objects here
    which will get destroyed at the end of the program. The deconstructor will
    run twice i.e. it will print "i am the deconstructor" twice.*/
}