#ifndef BIRTHDAY_H
#define BIRTHDAY_H

/*When creating an object we need to know their birthday.*/

class Birthday
{
public:
    Birthday(int m, int d, int y);
    void printDate();

private:
    int month;
    int day;
    int year;
};

#endif