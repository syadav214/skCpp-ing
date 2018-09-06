#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Books
{
    char Title[20];
    char Author[3];
    int ID;
    float price;
} book1;

int main()
{
    book1.ID = 10;
    book1.price = 13.67;
    strcpy(book1.Title, "DS");
    strcpy(book1.Author, "Me");

    cout
        << book1.ID;
    return 0;
}
