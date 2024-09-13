#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"

/*Whenever we are making a people object we will give it a name and thus we need
to import the string class.
We include the birthday header file because as one of the members aside from
just regular variables we are going to be storing a birthday object in this
class.*/
using namespace std;

/*Everyone must have a name and everyone must have a birthday here.*/

/*Everyone who is alive has a birthday so we want to store a birthday or a date
inside this people class.*/

class People
{
public:
    People(string x, Birthday birthdayobj1);
    /*Whenever we create a people object and pass a string as parameter
    it will assign it to the name and then if we write a birthday type
    value, the object will be assigned the birthdate.*/
    void printInfo();

private:
    string name;
    /*Whenever you want to use an object of another class inside this class
    you have to first type the class name and give it a variable*/
    Birthday dateOfBirth;
};
#endif