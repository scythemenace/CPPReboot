#include <iostream>
using namespace std;

int main()
{
    /*We want to make a program that allows the user to enter 5 diff. numbers
    and sum them but using a while loop*/
    int x = 1;
    int number;
    int sum = 0;
    while (x <= 5)
    {
        if (x == 1)
        {
            cout << "Enter a number" << endl;
        }
        else
        {
            cout << "Enter another number" << endl;
        }
        cin >> number;
        sum += number;
        x++;
    }
    cout << "The sum is:- " << sum << endl;
    return 0;
}