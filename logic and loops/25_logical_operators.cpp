#include <iostream>
#include <cmath>
using namespace std;

/*Below is an entry check system for a club but without using logical operators */

int main()
{
    int age = 23;
    int money = 650;

    if (age > 21)
    {
        if (money > 500)
        {
            cout << "you are allowed in legally" << endl;
        }
    }

    /*There is a better way to create the entry check
    We can run all our tests on a single line*/
    /*The && sign checks if cases on the left and right are true and only then
    executes the code*/
    /*The || sign checks if either one of the left and right cases are true.*/
    if (age > 21 && money > 500)
    {
        cout << "you are allowed in legally using the better method" << endl;
    }
    else if (age > 21 || money > 500)
    {
        cout << "it's illegal but you're allowed" << endl;
    }
    else
    {
        cout << "you aren't allowed" << endl;
    }
}