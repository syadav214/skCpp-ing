#include "./Birthday.H"
#include <iostream>
using namespace std;

Birthday::Birthday(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}

void Birthday::GetBirthDay()
{
    cout << year << month << day << endl;
}
