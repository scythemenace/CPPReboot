#include <iostream>
#include <string> //Included the string class.
using namespace std;

/*The below class is used for demonstrating WRONG way to implement a class.
You must not make class variables public, because that gives people room to
mess up your program*/
class BuckysClass
{
public:
    string name; // For using the string datatype we included the header <string>
};

/*Correct way to do it is make it private*/
class correctBuckysClass
{
private:
    string name;
    /*Now in order to manipulate this private variable, we need to make changes
    to it within the class instead of outside of it.*/

    /*We need to use the name somewhere outside anyway, so we build
    a public function which accesses this private function from within the class
    and then the public function will be used outside of the class. Thus
    preventing others from messing around with our variable.*/
public:
    void setName(string x)
    {
        name = x;
        /*That is called a setter method. Setter: A method that allows you to set
        or mutate the value of an attribute in a class*/
    }
    /*Now since we built a function that sets it to something, we need to build
    something that gets it. This is called a getter. A method that allows you
    to access an attribute in a given class*/
    string getName()
    {
        return name;
    }
};

int main()
{
    BuckysClass bo;
    bo.name = "Wrong! Gave outsiders access to a class variable.";
    /*We easily access the class variable which is not good as it gives freedom to us
    to change it*/
    cout << bo.name << endl;

    /*Need an object for the correctBuckysClass*/
    correctBuckysClass correctObject;
    correctObject.setName("Ankur");
    cout << correctObject.getName() << endl;
    return 0;
}