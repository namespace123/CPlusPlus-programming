#include <bits/stdc++.h>
using namespace std;

class Clock
{
    int hour, minute, second;
  public:
    Clock(int hour = 0, int minute = 0, int second = 0):hour(hour), minute(minute), second(second)
    {
      if(0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60 )
      {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
      }
      else
      {
        cout<<"Time error!"<<endl;
      }
    }
    void showTime() const
    {
      cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    // 前置单目运算符重载, 实现秒数+1
    Clock& operator ++ ()
    {
      second++;
      if(second >= 60)
      {
        second -= 60;
        minute++;
        if(minute >= 60)
        {
          minute -= 60;
          hour = (hour + 1) % 24;
        }
      }
      return *this;
    }
    // 后置单目运算符重载, 先使用后+1
    // 函数参数中的int仅仅是为了区分前后置，int实际上没有意义
    // 后置自增 
    Clock operator ++ (int)
    {
      Clock old = *this;
      ++(*this);  // 调用前置"++"运算符
      return old;
    }
};

int main()
{
  Clock myClock(23, 59, 59);
  myClock.showTime();
  (myClock++).showTime();
  (++myClock).showTime();

  return 0;
}

