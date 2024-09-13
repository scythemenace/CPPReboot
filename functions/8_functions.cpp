#include <iostream>
using namespace std;
void printSomething(); /*This is telling our main() that later on you are going
to encounter something called printSomething(). Instead of giving an error 
message now it knows that there's some function called printSomething()*/
int main()
{
    printSomething();
    /*Since the int main() was implemented before printSomething(), it doesn't
    have any clue about it because computer programs works with top-down approach. 
    Therefore, it will show an error.
    To avoid this error we need to tell it that we are going to create a
    function. You can cut the function below and paste it below the main.
    But the better way is to denote the type of the function above the main
    and write it's body later. This tells main() that you are going to create
    a function with that type in the future so it should keep that in mind.*/

    //Look at the top for function prototyping - denoting the type of the func below.
    return 0;
}

//Job of a function is to do something
/*Instead of just using the main function for our operations, we can define more
functions outside of the main body and then execute it inside the main body*/

/*You have to decide the type of function. If function returns something
you specify what it's going to return. If it returns an int then the type would
be an int or a something else. 
Functions that don't return anything have the type 'void'*/

void printSomething() //The two curly braces are called parameters. There is none now.
{
    //This is the body of the function which contains the instructions.
    cout << "This is a text" << endl;
}

/*Now whenever we want to use the function we call it inside the main function.
Look up in the main function's body.*/