/*
The 44th tutorial is in core_oop/ folder
*/

#ifndef SALLY_H
#define SALLY_H

/*ifnded means that if not defined sally header file then define it, that's the
include guard we talked about. Also you shouldn't include sally header file again,
if you've already included it.*/

class Sally
{
public:
    /*For those of you wondering why have we used two parameters:- int a
    and int b in the constructor -- This is for 44 tutorial "Member Initializers"*/
    Sally(int a, int b);
    void print();
    // The void print function is also a part of the 44 tutorial.

    // IGNORE THE ~Sally() if you are in 41_indirection_operators.cpp
    // THIS IS THE WAY TO WRITE A DECONSTRUCTOR (42_deconstructers.cpp tutorial)
    ~Sally(); /*The deconstructor looks the same as constructor except it has
    ~ symbol.
    Check Sally.cpp for more.*/
    void printCrap();
    void printShizz();
    /* This is 43_constant_object.cpp stuff
    Add const after the declaration to make it a constant function
    Since I mentioned in the 43rd tutorial file that only constant
    functions can be called with constant objects, that means all the
    other functions which don't include the const keyword infront
    of them are useless in that context*/
    void constantprintSizz() const;

    /*48_tutorial_material*/
    int num;

protected:
private:
    /*This is what we talk about in 44th tutorial. In this case we have a constant
    variable in our private class. we can't reassign it's value but since we didn't
    assign it a value during initialization it doesn't have a usable value yet
    Member Initialization provides us with a way to do that.*/
    /*We are gonna have a bunch of variables in our class - some constant and
    some regular.*/
    /*Constant variables have a couple weird rules.
    We have to utilize some special syntax called Member syntax to initialize
    it.
    We can also initialize regular variables using it but they have an option
    to either use Member syntax or use the regular way, but constant vars
    do not have that option.*/
    int regVar;
    const int constVar;
    // Check the constructor - Sally() i.e. can hold two vars
    // Then check Sally.cpp for the implementation of member initialization
};
#endif