#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    cout << "Answer:> \n";

    for (int i = N - 1; i > -1; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}
