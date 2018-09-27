#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class Numeric>
Numeric Max(const Numeric &x, const Numeric &y)
{
    if (x > y)
        return x;
    return y;
}

int main()
{
    long dA = 12334;
    long dB = 2;
    cout << "Max and min of two numbers: " << endl;
    cout << "Max value is: " << Max<long>(dA, dB) << endl;

    cout << "Dealing with char: " << Max<char>('dA', 'dB') << endl;

    return 0;
}
