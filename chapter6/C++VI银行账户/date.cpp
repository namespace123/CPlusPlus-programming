#include <bits/stdc++.h>
#include "date.h"
using namespace std;

namespace  // namespaceʹ����Ķ���ֻ�ڵ�ǰ�ļ�����Ч
{
  const int DAYS_BEFORE_MONTH[] =  {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
}

Date::Date(int year, int month, int day):year(year),month(month),day(day)
{
  totalDays = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + DAYS_BEFORE_MONTH[month - 1] + day;
}

// �ж��Ƿ�����
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
// չʾ
string Date::show() const
{
  string str = to_string(year) + "��" + to_string(month) + "��" + to_string(day) + "��";
  return str;
}
// �õ���ǰ������ָ��������������
int Date::distance(Date date) const
{
  return date.getTotalDays() - totalDays;
}
// ��ȡ�����ѹ�ȥ������
int Date::getMaxDays()
{

}
