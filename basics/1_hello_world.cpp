/*This is technically called a preprocessor directive. It pretty much says that
we are going to be including a file that we didn't make but will be using it.
It is a header file*/
#include <iostream>

using namespace std; /*std stands for standard library. It basically says that
we are going to be using all the standard libraries associated with C++*/

// This entire thing below is called a function.
// Every computer program starts with a function called main().
/*We are going to have many functions in a program. In order to tell the computer
the order of execution of all the functions and other things we have in a
program we have a main function. */
int main() // int is the type of data this function is
/*Main always works with integers*/
{
    /*cout is an output stream object. It is basically used to write characters onto
    the computer screen*/
    /*The "<<" character is called the stream insertion character and takes all the
    stuff to the right of it and prints it onto the screen using cout. It is usually
    used in conjuction with cout*/
    /*The endl means end line or basically go to the next line.*/
    cout << "Hello world!" << endl; // Everyline inside a function ends with a semicolon
    // Semicolons end a statement so that we can start the next one
    return 0; // Functions always want an answer back
    /*Since the main function is an int function, it wants an integer back. The
    main function is usually returned as 0 because that tells it that
    the program ran fine. It is usually the last line because if anything before it
    causes an error, the computer will never even get to the "return 0" statement
    and thus the error will be displayed. If it reaches the return 0 then that
    means that the program ran completely fine.*/
}

// The program was like this without the comments
/*
#include <iostream>
using namespace std;
int main ()
{
    cout << "Hello world" << endl;
    return 0;
}
*/