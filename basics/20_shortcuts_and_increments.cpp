#include <iostream>
using namespace std;

int main()
{

    /*Just basically showcasing all necessary shortcuts in C++*/
    int x = 10;
    x += 10; // adds to the right
    x -= 5;  // subtracts to the right
    x *= 2;  // multiplies
    x /= 5;  // divides
    x %= 3;  // divides and stores the remainder

    cout << "Value of x: " << x << endl;

    int y = 20;
    cout << "Increments y but doesn't update it immediately: " << y++ << endl;
    // Showcases shortcut for y = y + 1

    /*The above line doesn't print 21, instead the line below does. What the above
    line does is that it first goes through the whole line and then increments y.
    The cout statement below then prints the updated y from the previous line.*/

    cout << "Prints incremented y: " << y << endl;

    /*Now you must be wondering that what to do when you want to increment first
    and then run the statement in the same line
    You just use ++ as a prefix not suffix*/
    cout << "Updates first, then proceeds to print the updated var. Should print '22': " << ++y << endl;
    /*The same thing works for -- "decrement"*/

    /*There won't be any return statement at the end because the new version
    of c++ automatically assumes that there is a return 0 at the end of the main
    function.*/
}