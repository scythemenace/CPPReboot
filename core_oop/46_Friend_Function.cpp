#include <iostream>
using namespace std;

/*A class can have a friend function which is not exacty a part of it but can
access the variables and functions inside it.*/

class StankFist
{
public:
    StankFist()
    {
        stinkyVar = 0;
    }

private:
    int stinkyVar;

    // We need to use the friend to use it as a friend function.
    friend void stinkysFriend(StankFist &sfo);
    /*We have defined the prototype of the function here first because a function
    cannot demand a class's friendship. The class has to give it away first.
    Therefore, we prototype it here and use it somewhere else.*/
};

/*We pass StankFist &sfo to the friend function instead of just passing the
sfo object because we don't want to work with a copy of the object instead we want
to modify the class itself instead of working with a copy.*/
void stinkysFriend(StankFist &sfo)
{
    sfo.stinkyVar = 99; // Using StankFist object to modify stinkyVar
    cout << sfo.stinkyVar << endl;
}

int main()
{
    StankFist bob;
    stinkysFriend(bob);
}

/*Recap: We wanted to build a function that can access this class but
we didn't want to put it inside the class itself, so we made it a
friend of the class. Then we made a function that took a StankFist
object as a parameter. We create a StankFist object in the main and then
pass it as a parameter to the stinkysFriend()*/