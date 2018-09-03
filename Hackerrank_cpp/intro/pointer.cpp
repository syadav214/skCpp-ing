#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void increment(int *v)
{
    //cout << "*v: " << *v << endl;
    (*v)++;
}

void update(int *a, int *b)
{
    int add = *a + *b;
    cout << *a + *b << endl;
    int sub = *a - *b;
    if (sub < 0)
    {
        sub = sub * -1;
    }

    //cout << sub << endl;
    *a = add;
    *b = sub;
}

int main()
{
    int a;
    cin >> a;
    //cout << "&a: " << &a << endl;
    //increment(&a);
    //cout << "a => " << a << endl;

    int b;
    cin >> b;

    update(&a, &b);
    cout << a << " : " << b << endl;

    return 0;
}
