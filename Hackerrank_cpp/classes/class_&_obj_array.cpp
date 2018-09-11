#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
  private:
    int score1;
    int score2;
    int score3;
    int score4;
    int score5;

  public:
    void input()
    {
        cin >> score1 >> score2 >> score3 >> score4 >> score5;
    }

    int calculateTotalScore()
    {
        return score1 + score2 + score3 + score4 + score5;
    }
};

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
