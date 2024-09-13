#include "Burrito.h"
#include <iostream>
using namespace std;
/*This is where our main code goes*/

Burrito::Burrito()
/*This :: is binary scope resolution operator. It's basically saying that this 
function is a member of the class Burrito.

What is means is that Burrito is the class and Burrito() is the function i.e
The part before :: is the class and the part after is the function of that class.*/
{
    cout << "i am a banana" << endl;
}