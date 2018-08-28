#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
  public:
    Birthday(int y, int m, int d);
    void GetBirthDay();

  private:
    int year;
    int month;
    int day;
};

#endif
