#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Person
{
  public:
    int age;
    string name;
    virtual void getdata()
    {
        cin >> this->name >> this->age;
    }

    virtual void putdata()
    {
        cout << this->name << " " << this->age << endl;
    }
};

class Professor : public Person
{
  public:
    int publications;
    int cur_id;
    static int id;

    Professor()
    {
        this->cur_id = ++id;
    }

    void getdata()
    {
        cin >> this->name >> this->age >> this->publications;
    }

    void putdata()
    {
        cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << endl;
    }
};

int Professor::id = 0;

class Student : public Person
{
#define NUM_OF_MARKS 6
  public:
    int curr_id;
    int marks[NUM_OF_MARKS];
    static int id;

    Student()
    {
        this->curr_id = ++id;
    }

    void getdata()
    {
        cin >> this->name >> this->age;
        for (int i = 0; i < NUM_OF_MARKS; i++)
        {
            cin >> this->marks[i];
        }
    }

    void putdata()
    {
        int totMark = 0;
        for (int i = 0; i < NUM_OF_MARKS; i++)
        {
            totMark += this->marks[i];
        }
        cout << this->name << " " << this->age << " " << totMark << " " << this->curr_id << endl;
    }
};

int Student::id = 0;

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
