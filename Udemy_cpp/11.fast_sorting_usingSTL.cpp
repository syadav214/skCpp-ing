#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(int i, int j) // first index and next index
{
    return i > j; // i > j is for descending order; i < j if for ascending order
}

int main()
{
    int a[6] = {2, 5, 3, 8, 1, 9};

    // first position, last postion + 1
    sort(a + 0, a + 6);

    for (int j = 0; j < 6; j++)
    {
        cout << a[j] << " ";
    }

    cout << "\n";

    // descending order
    sort(a + 0, a + 6, comp);

    for (int j = 0; j < 6; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}
