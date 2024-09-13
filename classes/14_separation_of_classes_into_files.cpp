#include <iostream>
#include "Burrito.h"
#include "Ankur.h"
using namespace std;

/*Programmers generally like to separate their classes into different files.
Sometimes might have a 100 classes for your program and including them in one
text file makes it very large. Instead we'll separate them.*/

/*Check Burrito.h and Burrito.cpp for this. I've also created Ankur.h and Ankur.cpp
additionally for practice.*/
/*The class Burrito has been separated in two files. One is a .h and one is a .cpp
The .h contains the header and .cpp contains the main body code.*/

/*We seperate .h and .cpp files for the same class because whenever you give this
function to someone else to use. You are supposed to compile the cpp file
(changing it to 1s and 0s) and giving them the .h which means only the header files.
Basically you don't want them to change the main body code and only use
the function(Abstraction). This is done so that they don't change the
function body.*/

/*REMEMBER, WHEN COMPILING THE FILE YOU HAVE TO MENTION THE CLASS .cpp FILE AS WELL
FOR EG. IN THIS CASE:-
g++ -o separationofclasses 14separationofclassesintofiles.cpp Burrito.cpp
IF USING Ankur.h AS WELL THEN WE WOULD DO SOMETHING LIKE THIS:-
g++ -o separationofclasses 14separationofclassesintofiles.cpp Burrito.cpp Ankur.cpp
*/

int main()
{
    Burrito bo;
    Ankur ankur1;
    ankur1.basicPrint();
    return 0;
}