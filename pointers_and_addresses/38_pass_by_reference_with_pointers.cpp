#include <iostream>
#include <cmath>
using namespace std;
void passByValue(int x);
void passByReference(int *x);
int main()
{
    /*We already know that whenever we pass an arugment to a function, we 
    are giving it more information to execute a statement.
    Like sqrt(n) it needs a number n to find the square root.
    But it's not actually like that. There are more ways to pass arugments to a
    function*/

    /*What we have been doing is is using the pass by value method to put arguments to a
    function
    Whenever we pass by value to a function, we pass a copy of that variable
    into the function thus the original variable cannot be changed until we 
    set it to another value.*/

    /*Pass by reference mean that we pass a variable's address and give the
    function direct access to the variable and the original variable
    can be modified inside our function.
    It puts less stress on our computer because whenever we pass a value
    to our function our computer creates a copy. Suppose we had a 100
    variable to pass it will be very stressful for the computer. In pass
    by reference the computer doesn't have to do that.*/

    //Let's show how to do it
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    /*Since passByReference() only takes in a memory address, the input
    has to be a memory address. Therefore, we input &sandy instead of sandy.*/
    passByReference(&sandy);

    cout << "betty is now: " << betty << endl;
    cout << "sandy is now: " << sandy << endl;
    /*Betty remains the same but sandy gets changed because we directly
    manipulated the original variable instead of a copy*/
 
}

/*x is pretty much a copy of betty when called. Whenever we set x = 99, it only sets
the copy equal to 99 not the original variable betty*/
void passByValue(int x){
    x = 99;
}

/*In the function below or parameter is pointer x, which takes in memory
address. Now instead of copy of x, the variable itself is going to be
changed.*/
void passByReference(int *x) {
    *x = 66;
}