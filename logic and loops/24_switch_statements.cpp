#include <iostream>
using namespace std;
/*We will discuss switch statements which helps us write many if statements
efficiently*/
int main() {
    int age = 21;
    switch (age) {
        case 16:
            cout << "Hey you can drive now" << endl;
            break;
        case 18:
            cout << "go buy some lotto tickets~!" << endl;
            break;
        case 21:
            cout << "buy me some beer" << endl;
            break;
        default:
            cout << "sorry you get nothing" << endl;
    }

    /*Switch - inside the parenthesis we put the variable we want to check
    In each case statement we check cases. If it lands a particular case it will
    run.
    We put break after each case except for default because we want the
    program to break after it has found the useful case instead of going 
    through all the other cases. Basically it saves us from going through
    the rest of the loop.*/
}