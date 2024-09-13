#include <iostream>
using namespace std;

/*We have different types of variables. It could be a float, it could be an int, etc.
Similarly, a pointer is a variable that stores memory address as their value.*/

int main()
{
    int fish = 5;
    // We'll retrieve its memory address
    // The and symbol & is called the address operator
    cout << &fish << endl; // 0x16ce6320c :- memory address

    // A pointer is a special type of variable that points to a memory address.
    // It contains memory address as a value.
    /*In order to make a pointer go ahead and write type of data its going to point
    to.*/
    int *fishPointer;
    fishPointer = &fish;
    /*The * asterix symbol tells are compiler that we're going to declare
    a pointer*/
    /*You don't need to include the * symbol twice because you've already told
    the compiler that it is a pointer i.e. below when we print it, we don't
    say [ cout << *fishPointer <<endl ], we just say fishpointer*/
    cout << fishPointer << endl;
    // Prints 0x16ce6320c again
}