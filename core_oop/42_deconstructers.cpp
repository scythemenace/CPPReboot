#include <iostream>
#include "Sally.h"
using namespace std;

/*A deconstructer is basically code that runs automatically on deconstruction
of your objects. Like at the end of your program when all your classes and objects
are being destroyed, you want some code to run.
Similar to a constructor that runs when you create an object, when you delete an
object the deconstructor runs.*/

int main()
{
    Sally sallyobj1;
    cout << "omg wtf is this on my shoe?" << endl;
    // All we did was call the constructor upon creation of an object
    /*To create a deconstructor, it's done using tilde (~). Check sally.h for this*/

    /*The deconstructor is called after everything is done executing i.e. end
    of the program. This happens because by default C++ destroys all of your
    objects at the end of the program and thus the deconstructor gets called.*/
}