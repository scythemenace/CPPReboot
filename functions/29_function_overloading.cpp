#include <iostream>
using namespace std;

/*Function overloading refers to creating multiple functions with the same
name but different data types.
Suppose in our main function we have an int and a double. We want to parse both of
them into a function called printNumber().
Since our function is only supposed to take one input, we cannot put both
of them in one function. Therefore, we will create two functions with the
same name but different data type in each. 

The computer is smart enough to realize which printNumber to use based on the
data type entered while calling the function inside main()*/

void printNumber(int x) {
    cout << "i am printing an integer " << x << endl;
}

void printNumber(double x) {
    cout << "i am printing a float " << x << endl;
}

int main()
{
    int a = 54;
    double b = 32.4896;

    printNumber(a);
    printNumber(b);

}

