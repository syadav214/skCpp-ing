#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cout << "Enter two numbers: \n";
    cin >> n >> q;

    // create 2D array
    int **a = new int *[n]();

    // fill 2D array with 1D subarrays
    for (int i = 0; i < n; i++)
    {
        // get the length of the 1D array at a[i]
        int k;
        cout << "Enter array length: \n";
        cin >> k;

        // create the 1D subarray with the given length
        int *i_arr = new int[k]();

        cout << "Enter subarray: \n";
        // fill the subarray with k values
        for (int j = 0; j < k; j++)
        {
            cin >> i_arr[j];
        }

        // store the subarray in a
        a[i] = i_arr;
    }

    // run queries on a
    for (int q_num = 0; q_num < q; q_num++)
    {
        // get i, j as the 'query' to get a value from a
        int i, j;
        cout << "Enter  i, j as the 'query' to get a value: \n";
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    return 0;
}
