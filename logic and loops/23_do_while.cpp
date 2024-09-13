#include <iostream>
using namespace std;

int main() {
    /*What a do while loop does is runs some code first then goes through the
    loop.
    A do while looop is bound to execute at least once, even though the loop
    doesn't run, it first executes a statement and then runs the loop so 
    at least the first statement gets executed even if the loop doesn't run.*/
    //Syntax:
    int x = 1;
    do {
        cout << x << endl;
        x++;
    } while(x<10);
    /*Basically goes through the do, then the while checks if the condition
    has been met, if yes then executes once and if no, then executes
    the do statement for as long as the while condition has not been met.*/
}