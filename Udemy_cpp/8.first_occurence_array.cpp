//print the elements 0 based location of its first occurence, if present, otherwise print -1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int FirstIndex(int a[5], int num)
{
    int pos = -1;
    int left = 0;
    int right = 4; //sizeof(a);
    //cout << a[1] << " Val:" << sizeof(a) << endl;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == num)
        {
            pos = mid;
            right = mid - 1;
        }
        else if (a[mid] > num)
        {
            right = mid - 1;
        }
        else if (a[mid] < num)
        {
            left = mid + 1;
        }
    }

    return pos;
}

int main()
{
    int a[5] = {2, 4, 7, 7, 9};
    int b;
    cin >> b;
    cout << "Ans: " << FirstIndex(a, b) << endl;
    return 0;
}
