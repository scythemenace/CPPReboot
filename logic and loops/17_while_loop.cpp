#include <iostream>
using namespace std;

/*We'll be introducing loops through while loop*/

int main() {
    /*If I want to print "Hello" 10 times. Instead of typing cout I can just
    setup a loop*/
    int a = 0;
    int b = 10;
    while (a <= 10) {
        cout << "Hello" << endl;
        a++;
        /*The above ++ symbol increments the value of a during each loop until
        we get an exit condition "a<=10"*/
    }

    /*We can write the same thing but instead of incrementing we can decrement*/
    while (b >= 0) {
        cout << "World" << endl;
        b--; //This decrements it
        //Prints World 10 times
    }


    return 0;
}