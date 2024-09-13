#include <iostream>
using namespace std;

int volume(int l, int w, int h);
/*Defaults are written below in the volume_with_defaults() prototype,
see *the bottom comment above the actual definition* for the reason why
you must not rewrite them again if they've already been written below
during prototyping*/
int volume_with_default(int l = 1, int w = 1, int h = 1);

int main()
{
    cout << volume(4, 5, 6) << endl; // Prints 100
    /*What if we don't want to enter all three parameters, we use
    default parameters in order to equal to something in case
    the user didn't enter any value explicitly*/
    cout << volume_with_default(5) << endl;
    /*The number of arguments you enter for default parameter functions will be
    assigned to the value based on the order.
    If you enter any value for only 1 parameter, length gets replaced by 5.
    If you enter two values, length and width get replaced because orderwise
    they are before h (height)
    Entering all 3 fulfills the requirements.*/
    cout << volume_with_default(5, 6) << endl;
    cout << volume_with_default(5, 6, 7) << endl;
}

int volume(int l, int w, int h)
{
    return l * w * h;
}

/*If you type default values during prototyping the header, then you must not
rewrite the values in the actual function. Doing this will cause an error*/

int volume_with_default(int l, int w, int h)
{
    return l * w * h;
}