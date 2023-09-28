#include <bits/stdc++.h>
#include "date.h"
using namespace std;

namespace  // namespace使下面的定义只在当前文件中有效
{
  const int DAYS_BEFORE_MONTH[] =  {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
}

Date::Date(int year, int month, int day):year(year),month(month),day(day)
{
  totalDays = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + DAYS_BEFORE_MONTH[month - 1] + day;
}

// 判断是否闰年
bool Date::isLeapYear() const
{
  if(year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
  {
    return false;
  }
  else
  {
    return true;
  }
}
// 展示
string Date::show() const
{
  string str = to_string(year) + "年" + to_string(month) + "月" + to_string(day) + "日";
  return str;
}
// 得到当前日期与指定日期相差的天数
int Date::distance(Date date) const
{
  return date.getTotalDays() - totalDays;
}
// 获取本年已过去的天数
int Date::getMaxDays()
{

}
