#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string hours[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n > 9)
    {
        cout << "Greater than 9";
    }
    else
    {
        cout << hours[n];
    }

    return 0;
}
