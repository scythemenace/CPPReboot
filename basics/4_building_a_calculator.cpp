#include <iostream>
using namespace std;
int main()
{
    int a; //Not assigning value immediately is called declaring the variable
    int b;
    int sum;
    /*Below we're introducing cin. cout takes information from the computer and 
    cin takes information from the user and gives it to the user. cin is
    technically called the input stream object*/
    cout << "Enter a number hoss! \n";
    cin >> a;
    //Arrows face the opposite way because you are giving information to the computer
    /*Basically if we enter the number 3, it will be assigned to a*/
    cout << "Enter another number \n";
    cin >> b; //We did the same thing for b
    sum = a + b;
    /*You don't need to write int sum again because you have already stated that
    it is going to be an int before.*/
    cout << "The sum is " << sum << endl;
    /*since << feeds everything on the left to the right we can feed sum to the
    sentence*/
    return 0;
}