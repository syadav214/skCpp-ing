#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> num;

    stringstream ss(str);
    int a;
    char ch;
    // ss>>a takes string form stream
    while (ss >> a)
    {
        num.push_back(a);
        // to make loop work and get rid of comma
        ss >> ch;
    }

    return num;
}

int main()
{
    parseInts("23,4,56");
    return 0;
}
