#include <iostream>
#include "Sally.h"
using namespace std;

/*Read this if you are in 45th tutorial Member initializers (it's in the core_oop folder)*/
/*The part between the Sally() and {} :- regVar(a) and constVar(b) is just
member initializing it.*/
Sally::Sally(int a, int b)
    : regVar(a),
      constVar(b)
{
    cout << "i am the constructor!" << endl;
}

void Sally::print()
{
    cout << "regular var is: " << regVar << endl;
    cout << "constant var is: " << constVar << endl;
}

// Check 45_Member_Initializers.cpp for implementation and more explanation

void Sally::printCrap()
{
    cout << "I like to code" << endl;
}

/*IGNORE THE SECTION BELOW IF YOU ARE ON TUTORIAL 41_indirection_operators.cpp*/

/*Your deconstructor cannot have any parameters, no return value and cannot
overload it.*/

/*Whenever your object is created the constructor runs and
when your object is deleted or "destroyed" the deconstructor runs*/

Sally::~Sally()
{
    cout << "I am the deconstructor" << endl;
}

void Sally::printShizz()
{
    cout << "i am a regular function" << endl;
}

/*We type const write after we declare it to make a constant function.
Check sally.h for const prototyping*/
void Sally::constantprintSizz() const
{
    cout << "the same shizz but this time is constant" << endl;
}