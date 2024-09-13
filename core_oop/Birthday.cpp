#include <iostream>
#include "Birthday.h"
using namespace std;

/*We need to know their birthday when creating an object*/

Birthday::Birthday(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void Birthday::printDate()
{
    cout << month << "/" << day << "/" << year << endl;
}