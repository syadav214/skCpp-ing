/* Compile with c++11
g++ -std=c++11 test.cpp
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");

int A[1000], len = 9;

void BinarySearch(int num)
{
    int left = 0;
    int right = len - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (A[mid] == num)
        {
            cout << "Found in middle at " << mid << endl;
            break;
        }
        else if (A[mid] > num)
        {
            cout << mid << ">\n";
            right = mid - 1;
            cout << mid << ">=\n";
        }
        else if (A[mid] < num)
        {
            cout << mid << "<\n";
            left = mid + 1;
            cout << mid << "<=\n";
        }

        cout << "loop\n";
    }
}

int main()
{
    for (int i = 0; i < len; i++)
    {
        f >> A[i];
    }
    BinarySearch(9);
    return 0;
}
