#ifndef _BIRTH_H_
#define _BIRTH_H_
#include <bits/stdc++.h>
using namespace std;

class Birth
{
    int year;
    int month;
    int day;

  public:
    Birth():year(0), month(0), day(0) {}
    Birth(int year, int month, int day):year(year),month(month),day(day) {}
    Birth(const Birth &b):year(b.year),month(b.month),day(b.day) {}
    ~Birth() {}
    int getYear() const
    {
      return year;
    }
    int getMonth() const
    {
      return month;
    }
    int getDay() const
    {
      return day;
    }
    void setYear(int year)
    {
      year = year;
    }
    void setMonth(int month)
    {
      month = month;
    }
    void setDay(int day)
    {
      day = day;
    }
};

#endif

