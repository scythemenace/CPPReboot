#include <iostream>
using namespace std;

/*You can use classes to group a bunch of functions*/
/*An object is how you access the stuff outside of your class.
Why do you need to make an object? Whenever you're making a big computer program
and you have a bunch of different classes. You may have some functions that have
same named functions in some other class. To tell C++ that some function with a
name that is present in other classes is to be used, you have to specify which
class is it from*/

class BuckysClass{
    /*Sometimes you want to make function that you only want to use inside the class
    and sometimes you want to make functions that you want anybody to use
    some functions outside the class*/
    /*This is done by an access specifier. If you want main() or anything else
    outside of the class to be able to use your function we use "public" 
    access specifier*/
    public:
        void coolSaying(){
            cout << "Preaching to the choir" << endl;
        }
    

}; //This is a basic syntax of how to declare a class


class myPersonalClass {
    public:
        int Sum(int a, int b){
            return a + b;
        }
        int Div(int a, int b){
            return a / b;
        }
};
int main()
{
    BuckysClass buckysObject;
    //Now you have created buckysObject.
    //You use the object to access anything inside the class.
    buckysObject.coolSaying();
    /*To access things inside of the class, you use the dot separator*/
    //It will print the function coolSaying() inside of BuckysClass

    myPersonalClass personalObject;
    cout << personalObject.Sum(10, 20) << endl;
    cout << personalObject.Div(20, 2) << endl;
    return 0;
}