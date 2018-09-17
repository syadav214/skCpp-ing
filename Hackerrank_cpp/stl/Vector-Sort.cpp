#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << "Sorted array:> " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
