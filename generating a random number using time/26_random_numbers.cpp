#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*We include the <cstdlib> because we want to use a function called rand()
 * We include the <ctime> for srand(time) which you will see later.*/

int main()
{
    // cout << rand() << endl;
    /*rand() basically takes a random number and gives it to you*/
    for (int x = 1; x < 6; x++)
    {
        if (x == 1)
        {
            cout << "This is any random number - could be big: " << rand() << endl;
            cout << "This is any random number - could be big: " << rand() << endl;
            /*Only running this two times because I don't want big numbers
            cluttering the space. This is just to show you how rand() works.*/
        }
        /*The problem is it literally gives you any random number even in
        100s and 1000s and we don't want that*/

        /*Suppose we only want a random number from 0 to 5.
        If our rand() gives us a big number, a big number divided by 6 will always
        remainder less than it because there is a rule that remainder cannot be
        greater than the divisor. If we take the mod(%) n of the number we get
        from rand then we will get any number from 0 to n-1 in return.*/
        if (x == 2)
        {
            cout << "This is any random number b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number b/w 0-5: " << rand() % 6 << endl;
        }
        /*using the above line, we're getting numbers between the 0 to 5. If
        we want 1 - 6 then we can just add 1 to it.*/
        cout << "This is any random number b/w 1-6: " << 1 + rand() % 6 << endl;

        /*!THE PROBLEM:
        Random might give you same number everytime!
        No "computerized random number generator" is completely random. Computers have
        to follow a certain structure and algorithm. Even casino slot machines
        are not random. Everything follows a certain algorithm. If you rerun
        this program different times, you'll notice it's giving the same number*/

        /*We use srand() to make this algorithm better. srand() stands for
        "seed" a random number. What this function does is that it allows us to pass
        a random number and then gives different results everytime (due to a seed).
        Whenever we seed a random number, it changes the algorithm a bit.*/

        /*srand() is not a print function. It is used before all the rand()
        functions in order to change the algorithm a bit.
        This means that even if u write srand(something), unlike rand() it doesn't do anything
        rather it "changes" the actual "rand()" function to a different algorithm.
        So after all this yapping, what I am trying to say is, use "srand()" at the top of
        the code and after that YOU ARE REQUIRED to write "rand()" in order display
        the number, BUT THIS TIME your rand() will be different

        Below, is an example of that, for this we are going to rewrite same rand() lines we had written
        at the top but this time we will call the srand() function before calling the "rand()"s.
        this time.*/
    }
    srand(534);
    for (int x = 1; x < 6; x++)
    {
        if (x == 1)
        {
            cout << "This is any random number using srand() - could be big: " << rand() << endl;
            cout << "This is any random number using srand() - could be big: " << rand() << endl;
        }
        if (x == 2)
        {
            cout << "This is any random number using srand() b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number using srand() b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number using srand() b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number using srand() b/w 0-5: " << rand() % 6 << endl;
        }
        cout << "This is any random number using srand() b/w 1-6: " << 1 + rand() % 6 << endl;
    }
    /*!!ANOTHER PROBLEM:
    Even this is not completely random because if you run the algorithm again
    and again, you'll notice all of this is just giving the algorithm
    a different path to follow. It gives a different result but only once,
    from there onwards you have to kind of input a different number inside of
    srand() to get a different result.
    But that's impossibe! How can one input a different number inside srand()
    continuously after they've written the code. One bad approach is to loop
    it, since loops also terminate at one point*/

    /*The genius idea here (not by me obviously) is that time changes every second
    (epoch time since 1970 for UNIX). Time is never fixed at a particular moment,
    so if we input time as the main variable, we can achieve an srand() that has
    a different seed each second i.e. the algorithm has a different path to follow
    every second so our rand() will truly be a random number. We use time(0) inside
    srand() allows us to access the clock or the time in our computer to do this.
    Let's run all the cout statements again using time(0)*/
    srand(time(0));
    for (int x = 1; x < 6; x++)
    {
        if (x == 1)
        {
            cout << "This is any random number using srand(time(0)) - could be big: " << rand() << endl;
            cout << "This is any random number using srand(time(0)) - could be big: " << rand() << endl;
        }
        if (x == 2)
        {
            cout << "This is any random number using srand(time(0)) b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number using srand(time(0)) b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number using srand(time(0)) b/w 0-5: " << rand() % 6 << endl;
            cout << "This is any random number using srand(time(0)) b/w 0-5: " << rand() % 6 << endl;
        }
        cout << "This is any random number using srand(time(0)) b/w 1-6: " << 1 + rand() % 6 << endl;
    }
    /*This works perfectly! We know srand() changes the algorithm a little
    bit, we throw a number to change it a little bit but if we threw the
    same number here everytime, it'll use a diff. algorithm but we'll still
    get the same result.

    time(0) has been calculating the seconds passed since 1970 or something. Meaning
    right now it could be possibly more than a million seconds in 2023. It's value
    changes every second.*/

    /*basically srand() allows us to throw in a number in order to change the
    algorithm a little bit and time(0) is the perfect number because it changes
    every second, so each time we run the program the algorithm will be different
    ------
    ["In the backend time(0) basically returns a value for the time elapsed since the
     first recorded time in 1970"]*/
}