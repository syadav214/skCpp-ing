/* Compile with c++11
g++ -std=c++11 test.cpp
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Books
{
    char Title[20];
    char Author[3];
    int ID;
    float price;

    Books()
    {
        ID = 6;
        price = 13.67;
        memset(Title, 0, sizeof(Title));
        memset(Author, 0, sizeof(Author));
    }
} book1;

int main()
{
    book1.ID = 10;
    book1.price = 13.67;
    strcpy(book1.Title, "DS");
    strcpy(book1.Author, "Me");

    cout << book1.ID << endl;

    Books book2;
    cout << book2.ID << endl;

    return 0;
}
