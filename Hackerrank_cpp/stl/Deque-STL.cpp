#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k)
{

    deque<int> dqForPrint;

    for (int i = 0; i < n; i++)
    {

        // base case for first element
        if (dqForPrint.empty())
        {
            dqForPrint.push_back(i);
        }

        // remove elements outside the current window
        if (dqForPrint.front() <= (i - k))
        {
            dqForPrint.pop_front();
        }

        // move max element to the front
        while (!dqForPrint.empty() && arr[i] >= arr[dqForPrint.back()])
        {
            dqForPrint.pop_back();
        }

        dqForPrint.push_back(i);

        // print out only when the first window is completed
        if (i >= (k - 1))
        {
            cout << arr[dqForPrint.front()] << " ";
        }
    }
    cout << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
