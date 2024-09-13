#include <iostream>
using namespace std;

int main()
{
    int bertha[2][3] = {{1, 2, 3}, {7, 8, 9}};

    /*In order to print the whole array, we need to loop through it*/
    int number_of_rows = sizeof(bertha)/sizeof(bertha[0]);
    int number_of_columns = sizeof(bertha[0])/sizeof(bertha[0][0]);
    cout << "number of rows: " << number_of_rows << endl;
    cout << "number of cols: " << number_of_columns << endl;
    for (int row = 0; row < number_of_rows; row++) {
        for (int col = 0; col < number_of_columns; col++) {
            cout << "Element " << row << col << " is: " << bertha[row][col] << endl;
        }
    }
    cout << "The whole array is: " << endl;
    for (int row = 0; row < number_of_rows; row++) {
        for (int col = 0; col < number_of_columns; col++) {
            cout << bertha[row][col] << " ";
        }
        cout << endl;
        /*We out the endline statement after the column for loop because we
        want each element in a column together and then add a line instead
        of adding a line after every element.*/
    }
}