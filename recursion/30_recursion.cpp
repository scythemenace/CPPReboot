#include <iostream>
using namespace std;

/*Recursion is the idea that a function can call itself*/

void Bucky() {
    cout << "omgwtfbbq" << endl;
    /*Calling a function like this inside itself.*/
    //Bucky();
    /*It creates a never ending machine loop and you shouldn't do that.*/

    /*The point of building recursive functions is whenever you build a truly
    recursive function, you need to have a base case. A base case is pretty much 
    an ending point for it*/
}

/*We are showing how to implement a good recursion by creating factorials.*/
int Factorial(int x) {
    if(x == 1) {
        return 1;
        /*This is the base case that ends the program to prevent it from crashing.*/
    } else {
        return x * Factorial(x - 1);
        /*We called Factorial inside itself, but with one less than the
        input. When x reaches 1, it will end by returning 1.*/
    }
}

int main()
{
    Bucky();
    cout << Factorial(5) << endl;
}