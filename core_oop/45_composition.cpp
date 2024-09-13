#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

/*Aside from just functions and regular variables, a class can also have objects
of another class as its member.*/

/*This tutorial uses two classes Birthday and People so be sure to check their
files for some information.*/

int main()
{
    Birthday birthdayobj2(10, 24, 2004);

    /*Check people.h and people.cpp */
    People BuckyRoberts("Bucky Roberts", birthdayobj2);

    BuckyRoberts.printInfo();
}