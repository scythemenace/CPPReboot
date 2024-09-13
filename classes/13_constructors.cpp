#include <iostream>
#include <string>
using namespace std;

/*A constructer is a function that gets called automatically as soon as you create
and object*/

class BuckysClass{
    public:
    /*Constructors never have a return type and the constructor name is always
    the same as the class name*/
        BuckysClass(string z){
            //Assigned a parameter. Read the comment below to know why

            cout << "this will get printed automatically\n";
            /*Since constructor gets called as soon as we create
            an object, this message will get printed automatically.*/
            
            /*Constructors are usually never used to print a message, so don't do
            that. The main reason that people make constructors are to give
            variables an inital value.*/

            /*For eg. we have a string variable below, but suppose we had a
            car class and we have different variables like color, fuel_type,
            etc. and we want each object to be different. Using constructor we
            can assign them different values because constructor gets called
            immediately after we create an object. It can hold parameters, which
            allows you to add custom values to variables immediately upon its
            creation.*/

            setName(z);
            cout << getName() << endl;
            /*These above function will get called immediately.*/

        }

        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main()
{
    BuckysClass BuckysObject("Ankur");
    BuckysClass BuckysObject1("Bindra");
    /*Creating a new object, in this case BuckysObject1 doesn't mean
    that it will overwrite our original BuckysObject name. Each object
    will be different in this case.*/
    
    /*When you build and run it, the above message will get printed.*/
    return 0;
}