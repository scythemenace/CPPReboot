#include <iostream>
using namespace std;
int main()
{
    /*The basically put something inside the paranthesis to a test. If it passes
    the test, execute the following command.*/
    if(5 > 3) {
        cout << "Bucky is awesome" << endl;
        //Since 5 is always greater than 3, therefore it passed the test and will run.
    } if (1 > 3) {
        cout << "Sadly won't print";
        //It won't print this statement because 1 isn't greater than 3
    } if (1 <= 3) {
        cout << "This will print because 1 is less than or equal to 3" << endl;
    } if (3 == 3) {
        cout << "This will also print because 3 is equal to 3" << endl;
        /*The normal = assigns any value to its right to the left whereas
        the == checks if two values are equal or not. It is a binary infix
        operator.*/
    } if (10 != 8) {
        cout << "Again it printed!" << endl;
        /*This is because 10 is not equal to it.*/
    }
    /*You can even test variables against each other*/
    int a = 5;
    int b = 6;
    if (a != b) {
        cout << "See works on variables too!" << endl;
    }
    return 0;
}