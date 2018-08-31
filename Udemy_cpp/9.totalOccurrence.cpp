#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int size, int num, int lastOccr = false)
{
    int left = 0;
    int right = size - 1;
    int pos = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == num)
        {
            pos = mid;
            if (lastOccr)
                left = mid + 1;
            else
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
    int a[] = {1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 5, 6, 6, 8, 9, 9};
    int size = sizeof(a) / sizeof(a[0]);
    int num;
    cin >> num;
    int firstOccurence = BinarySearch(a, size, num);
    cout << "firstOccurence: " << firstOccurence << endl;

    if (firstOccurence > -1)
    {
        int lastOccurence = BinarySearch(a, size, num, true);
        cout << "lastOccurence: " << lastOccurence << endl;
        cout << "Count: " << lastOccurence - firstOccurence + 1;
    }

    return 0;
}
