#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    /* C++ has manipulators which change the way we print
    Like we have
    hex => convert to hexadecimal
    left => left align
    showbase => numerical integer values inserted into output streams are prefixed with the same prefixes like 0x for hex
    nouppercase => lower case    

    dec => switches numbers from hexadecimal back to decimal.
    right => aligns values to the right instead of the left
    setw(15) => sets a fixed width of 15, as the effect from the initial code only impacts the first printed line.
    setfill('_') => by default, when you have a fixed width, if your printed value doesn't fill up the entire length (for example, if you have a width of 15 and only print 7 characters), the extra characters used to pad are whitespaces. This function lets you change the padding to whatever character you want.
    showpos => Makes sure there is a plus sign before any positive numbers
    fixed => ensures that number is printed out entirely and that scientific notation isn't used for larger numbers
    setprecision(2) => sets the number of decimal places to 2.

    scientific => Prints output in scientific notation format
    uppercase => capital letters
    noshowpos => Undoes previous showpos manipulator and gets rid of the plus at the start of positive values
    setprecision => Changes the number of digits after the decimal place from 2 to 9.
    */

    cout << hex << left << showbase << nouppercase; // formatting
    cout << (long long)A << endl;                   // actual printed part

    cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
    cout << B << endl;                                                                       // actual printed part

    cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
    cout << C << endl;                                               // actual printed part

    return 0;
}
