#include <iostream>
using namespace std;

int addNumbers(int x, int y, int z, int o) // Just added two parameters instead of 1
{
    /*This function just adds two numbers*/
    return x + y + z + o;
}

int main()
{
    int a;
    int b;
    int c;
    int d;
    cout << "Enter first number for the sum" << endl;
    cin >> a;
    cout << "Enter second number for the sum" << endl;
    cin >> b;
    cout << "Enter third number for the sum" << endl;
    cin >> c;
    cout << "Enter fourth number for the sum" << endl;
    cin >> d;
    cout << addNumbers(a, b, c, d);
    return 0;
}

