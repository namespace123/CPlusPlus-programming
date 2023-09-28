#ifndef _DATE_H_
#define _DATE_H_

class Date
{
    int year;
    int month;
    int day;
    int totalDays;  // 相对日期
  public:
    Date(int year, int month, int day);
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
    int getTotalDays() const
    {
      return totalDays;
    }
    // 判断是否闰年
    bool isLeapYear() const;
    // 展示
    string show() const;
    // 得到当前日期与指定日期相差的天数
    int distance(Date date) const;
    // 得到当前月的天数
    int getMaxDays();
};

#endif
