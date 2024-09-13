#include "hannah.h"
#include <iostream>
using namespace std;

hannah::hannah(int num)
    : h(num)
{
}

void hannah::printCrap()
{
    cout << "h=" << h << endl;
    cout << "this->h " << this->h << endl;
    cout << "(*this).h= " << (*this).h << endl;

    /*Remember we use -> instead of . in the case of pointer. Like how we assigned
    a pointer to an object and were calling its functions using ->
    The same way "this" keyword is a pointer.
    Whenever we use the word "this" stores the address of the current object you are
    working with. The object we were currently working with is ho
    (Check 47_this_keyword)

    If you think about this, whenever we are printing h directly, C++ kind of
    assumes that you are referring the current object but by using the
    this (->) keyword you are explicitly telling C++ that you are referring
    to the current object.

    (*this).h does the same thing as above, but is a different way to write it.
    It is basically called derefering a pointer. It's literally
    taking the memory location of the current object and calling the
    variable's value right there. Whatever current object we are working with
    which is ho, the ho has a variable called h and prints h.
    */
}