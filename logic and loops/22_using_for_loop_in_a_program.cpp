#include <iostream>
#include <cmath> //Allows us to use basic math functions
using namespace std;

/*Showcasing how to calculate how much money you can make in the stock market.
Our goal is to earn 1% each day. In our formula we're using power and that's why
we included cmath library in our file.*/
int main()
{
    double a; /*We can't use int for decimal, therefore we use double
     (could use float also but double is better)*/

    double p = 10000;
    double r = 0.01; // 1% interest each day
    for (int day = 1; day <= 30; day++)
    {
        a = p * pow(1 + r, day); // Formula for counting interest rate
        cout << day << " ----- " << a << endl;
    }
}