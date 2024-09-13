#include <iostream>
#include "Sally.h"
using namespace std;

/*Check Sally.h and Sally.cpp first then return here for implementation and more
explanation.*/

int main()
{
    Sally sallyobj1(3, 87);
    sallyobj1.print();

    /*Check sally.h and sally.cpp first for the context below
    Now you must be wondering why have I "member initialized" a variable in Sally.
    Why can't I just normally assign it.
    -> In our class, the variables we want to assign some values, as soon as our
    object is created are located in the private section. Meaning they can only be
    accessed inside the class.
    Now you must be wondering why we didn't do this:-
    -> In Sally.cpp
    Sally::Sally(int a, int b) {
            cout << "i am the constructor!" << endl;
            regVar = a;
            constVar = b;
        }
    This approach would have worked totally fine with normal variables, but
    remember constant variables cannot be assigned. So incase of constVar this will
    result in an error. [constvar basically means we might have some constant variable
    in our private section of the class]
    Therefore, we use member initializers(as the name say, they intialise a member value
    and as we know constant variables can only be assigned during initialization, this
    treats the variable that way "since technically, even the constant variable has
    been there, the object was just intialized")
    Sally::Sally(int a, int b)
    : regVar(a),
    constVar(b) {
            cout << "i am the constructor!" << endl;
            regVar = a;
            constVar = b;
        }
    */
}
