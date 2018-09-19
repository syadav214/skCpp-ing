#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    int q, val;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> val;

        // An iterator to the lower bound of val in the range
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);

        // We need to subtract the iterator(low) with begin to get position of the lower bound of val
        if (v[low - v.begin()] == val)
            cout << "Yes ";
        else
            cout << "No ";

        cout << (low - v.begin() + 1) << endl;
    }

    return 0;
}
