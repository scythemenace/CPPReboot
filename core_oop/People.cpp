#include <iostream>
#include "People.h"
#include "Birthday.h"
using namespace std;

/*We initialized the private variables to the parameters using member
initializers.*/
People::People(string x, Birthday birthdayobj1)
: name(x),
dateOfBirth(birthdayobj1) {


}

void People::printInfo() {
    cout << name << " was born on "; 
    dateOfBirth.printDate();

}