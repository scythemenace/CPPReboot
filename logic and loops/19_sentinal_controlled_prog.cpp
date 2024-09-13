#include <iostream>
using namespace std;

/*We'll create the same thing as we did in 18testingwhileloop.cpp but instead of
predetermining the number of times it's gonna run. We're going to create a menu
like program for the user.*/

/*It is called sentinal controlled loop because we are not limited to a certain
number. Any amount of sample size and this program will still work fine.*/

int main()
{
    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first person's age or -1 to quit: ";
    cin >> age;
    while (age != -1)
    {
        ageTotal += age;
        numberOfPeopleEntered++;
        cout << "Enter next person's age or or -1 to quit: ";
        cin >> age;
    }

    cout << "Number of people entered: " << endl;
    cout << "Average age: " << ageTotal / numberOfPeopleEntered << endl;

    return 0;
}