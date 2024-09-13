#include <iostream>
using namespace std;

int main() {
    int age = 24;
    if (age > 60) {
        cout << "wow you are old" << endl;
    } else if (15 < age && age < 30) {
        cout << "you are young get a job" << endl;
    } else {
        cout << "you cannot work yet!" << endl;
    }

    /*what else if statement does is that it executes a statement only if the
    previous if statement(s) didn't run*/
    /*an else statement is the final conclusion. If none of the if and else if
    statements work, then else statement is executed.*/

    /*We can nest if statements also*/
    int old_age = 99;
    if (old_age > 60) {
        if (old_age > 90) {
            cout << "You should be dead" << endl;
        }
    }
    return 0;
}