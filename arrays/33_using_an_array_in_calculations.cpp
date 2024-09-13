#include <iostream>
using namespace std;

int main()
{
    int tuna[5] = {20, 54, 76, 832, 546};
    int sum = 0;
    /*It's important to initialize sum to 0 first otherwise it will contain
    a random value depending on the memory it is occupying
    I know we said we *declare it* but in cases where you want
    to display a default value before it gets mutated, you would want
    to insantiate it with a default value which you deem okay in the context
    otherwise it'd allocate it a random value based on the memory block it
    uses*/

    /*Create sum of all elements in the tuna array*/
    for (int i = 0; i < sizeof(tuna) / sizeof(int); i++)
    {
        sum += tuna[i];
    }
    /*Remember in the condition i must be less than sizeof(tuna)/sizeof(int)
    otherwise, it'll exceed array size and a wrong sum will be printed.*/

    cout << "This was the number of elements in the array " << sizeof(tuna) / sizeof(int) << endl;
    cout << "This is the sum of all elements of the array: " << sum << endl;

    /*Basically sizeof() can be used to find the length of an array in order
    to iterate through its elements. sizeof(tuna) gives the total bytes of the entire
    array and sizeof(int) gives the byte size of the individual data type(int in this case).
    When we divide the size of the total array by the size of individual data type
    we get the length. */
}