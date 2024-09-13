#include <iostream>
using namespace std;

int main() {
    /*Basic syntax for for loop
    Initialize a variable with a starting value, state the end condition and 
    then increment*/
    for(int i = 1; i < 10; i++) {
        cout << i << endl; //Prints integers from 1 to 9
    }

    /*You can choose a different skipping value*/
    for(int i = 1; i < 10; i+=5) {
        cout << i << endl; //Prints integers from 1 to 9
    }
}