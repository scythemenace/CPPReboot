#include <iostream>
using namespace std;

int main()
{
    int bucky[6];
    /*Each integer takes 4 bytes.*/
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];
    int *bp3 = &bucky[3];
    //Pointer 0 contains the memory address of first element of bucky array
    cout << "bp0 is at " << bp0 << endl;
    /*Since bp0 was at 0x16f3731e4 address, we would except the next element
    pointer to be 4 bytes away from bp0.*/
    cout << "bp1 is at " << bp1 << endl; //bp1 is at 0x16b1df1e8
    cout << "bp2 is at " << bp2 << endl; //bp2 is at 0x16b1df1ec
    cout << "bp3 is at " << bp3 << endl; //bp3 is at 0x16b1df1f0
    /*We can see that they are 4 bytes away from each other and nothing else
    can go in that address except for that int.*/
    /*Let's add a number to bp0 and see what happens.*/
    bp0 += 2;
    cout << "bp0 is now at " << bp0 << endl; 
    /*instead of0x16f0cf1e4 its at 0x16f0cf1ec*/
    /*Some of us were expecting the address to change to 0x16f0cf1e6 
    0x16f0cf1e4 + 2, but that's not how pointers work.
    It changed the whole address to some other element. What happened was
    whenever integers are added to pointers, it doesn't change the pointer rather
    it changes the integer it points to. It pointed to some integer that is 
    "2" elements away from the original integer it was pointing to.*/
    /*bp0 is basically pointing to the 2nd element now instead of 0th element.*/
}