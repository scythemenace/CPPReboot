#include <iostream>
using namespace std;

void Bucky();

int tuna = 20;
/*Whenever you make your variable outside the function, every single function has
access to this variable because this is a global var.*/

int main()
{
    /*If we make it inside a function, you can only access it inside a function
    i.e. function named Bucky can't access it.*/
    double tuna = 69;
    cout << "Prints local var " << tuna << endl;
    /*Since the vars have the same name, the local variable i.e. the variable
    created inside the function will be given priority in the case
    the name is same as a global variable*/

    /*The variable called inside a function (local var) will always have
    priority when printing stuff out because it's in that context.
    In order to give a global variable of the same name priority over
    local variable we use something called unary scope resolution operator (::)*/
    Bucky();
    cout << "Uses global tuna instead of local " << ::tuna << endl;

    /*People do this when they have the same name, but different data type.
    Using :: lets them decide which variable to give priority to.*/
}

void Bucky()
{
    cout << "Uses global var " << tuna << endl;
    /* Prints the global var tuna since the main() function's tuna is out
     it's scope */
}