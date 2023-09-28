#ifndef _DATE_H_
#define _DATE_H_

class Date
{
    int year;
    int month;
    int day;
    int totalDays;  // �������
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
    // �ж��Ƿ�����
    bool isLeapYear() const;
    // չʾ
    string show() const;
    // �õ���ǰ������ָ��������������
    int distance(Date date) const;
    // �õ���ǰ�µ�����
    int getMaxDays();
};

#endif
