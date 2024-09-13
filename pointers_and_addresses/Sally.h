/*
The 45th tutorial is in deeper core_oop folder
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
    and int b in the constructor -- This is for 45 tutorial "Member Initializers"*/
    Sally(int a, int b);
    void print();
    // The void print function is also a part of the 45 tutorial.

    // IGNORE THE ~Sally() if you are in 41_indirection_operators.cpp
    // THIS IS THE WAY TO WRITE A DECONSTRUCTOR
    ~Sally(); /*The deconstructor looks the same as constructor except it has
    ~ symbol.
    Check Sally.cpp for more.*/
    void printCrap();
    void printShizz();
    /*Add const after the declaration to make it a constant function*/
    void constantprintSizz() const;

    /*48_tutorial_material*/
    int num;

protected:
private:
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
    // Check the constructor - Sally()
    // Then check Sally.cpp
};
#endif