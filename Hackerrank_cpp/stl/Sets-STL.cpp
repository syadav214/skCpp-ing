#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int type, query;
        cin >> type >> query;
        switch (type)
        {
        case 1:
            s.insert(query);
            break;
        case 2:
            s.erase(query);
            break;
        case 3:
            cout << (s.find(query) == s.end() ? "No" : "Yes") << endl;
            break;
        case 4:
            cout << "Size: " << s.size() << endl;
            break;
        case 5:
            cout << "Count: " << s.count(query) << endl;
            break;
        }
    }

    return 0;
}
