/* Compile with c++11
g++ -std=c++11 test.cpp
*/
#include <iostream>
#include <cstdio>
#include "./Birthday.H"

int main()
{
    Birthday bo(1, 2, 3);
    bo.GetBirthDay();

    return 0;
}
