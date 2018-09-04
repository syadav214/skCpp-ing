#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {2, 5, 3, 8, 1, 9};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for (int j = 0; j < 6; j++)
    {
        cout << a[j] << endl;
    }

    return 0;
}
