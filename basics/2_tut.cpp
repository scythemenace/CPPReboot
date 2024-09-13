#include <iostream>
using namespace std;
int main () {
    cout << "boy i love bacon ";
    /*All cout does is print it to the stream. It won't go to the next line because
    it doesn't tell them to. Computer programs are very picky and need to be told
    what to do.*/
    cout << "and ham" << endl;
    //notice that the statement below will appear at a new line.
    cout << "see the new line worked when you add endl" << endl;
    //Including \n in your "quotation marks" will make doing this much easier.
    cout << "now let's rock and roll \n";
    cout << "It worked using newline right?";
    /*Basically stream insertion operator works like this:- each stream insertion
    resumes its printing out wherever the previous one stops.*/
    return 0;
}