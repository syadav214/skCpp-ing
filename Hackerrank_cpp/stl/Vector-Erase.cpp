#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int q1, q2i, q2j;
    cin >> q1;
    cin >> q2i >> q2j;

    // it will erase the given position
    v.erase(v.begin() + (q1 - 1));

    // it will erase given range
    v.erase(v.begin() + (q2i - 1), v.begin() + (q2j - 1));

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
