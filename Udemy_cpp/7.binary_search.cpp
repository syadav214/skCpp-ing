#include <bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[1000], NoOfElements;
int BinarySearch(int X)
{
    int Left = 1, Right = NoOfElements, mid;

    while (Left <= Right)
    {
        mid = (Left + Right) / 2;

        if (X == A[mid])
            return mid;
        else if (X < A[mid])
            Right = mid - 1;
        else
            Left = mid + 1;
    }
    return -1;
}
int main()
{
    f >> NoOfElements;
    // array in ascending order
    for (int i = 1; i <= NoOfElements; ++i)
        f >> A[i];

    cout << BinarySearch(21);

    return 0;
}
