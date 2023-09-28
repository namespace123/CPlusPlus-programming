#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
using namespace std;
#include "date.h"
#include "date.cpp"

class SavingAccount   //储蓄账户类
{
    string id;  // 账号
    double balance;  // 余额
    double rate;  // 存款的年利率
    Date lastDate;  //上次变更余额的时间
    double accumulation; //余额按日累加之和
    static double total;  // 所有账户的总金额

    // 记录一笔账，date为日期，amount为金额
    void record(Date date, double amount, string description);
    double accumulate(Date date) const
    {
      return accumulation + balance * lastDate.distance(date);
    }
  public:
    SavingAccount(Date date, string id, double rate);
    string getId() const
    {
      return id;
    }
    double getBalance() const
    {
      return balance;
    }
    double getRate() const
    {
      return rate;
    }
    //static 成员函数不能被声明成const、volatile或者const volatile
    static double getTotal()
    {
      return total;
    }

    // 存入现金
    void deposit(Date date, double amount, string description);


//void SavingAccount::deposit(Date date, double amount, string description)
//{
//  record(date, amount, description);
//}
//

    // 取出现金
    void withdraw(Date date, double amount, string description);
    // 利息结算，每年1月1日调用一次该函数
    void settle(Date date);
    // 显示账户
    void show();
    // 报告错误
    void error(string msg);
};

#endif
