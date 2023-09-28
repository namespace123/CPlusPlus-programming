#include <bits/stdc++.h>
using namespace std;
class SavingAccount
{
    int id;
    double balance;  // 余额
    double rate;  // 利率
    int lastDate;  //上次变更余额的时间
    double accumulation; //余额按日累加之和

    // 记录一笔账，date为日期，amount为金额
    void record(int date, double amount);
    double accumulate(int date) const
    {
      return accumulation + balance * (date - lastDate);
    }
  public:
    SavingAccount(int date, int id, double rate);
    int getId()
    {
      return id;
    }
    double getBalance()
    {
      return balance;
    }
    double getRate()
    {
      return rate;
    }

    // 存入现金
    void deposit(int date, double amount);
    // 取出现金
    void withdraw(int date, double amount);
    // 利息结算，每年1月1日调用一次该函数
    void settle(int date);
    // 显示账户
    void show();
};
// 建立账户
SavingAccount::SavingAccount(int date, int id, double rate):id(id),balance(balance),rate(rate),lastDate(date),accumulation(0)
{
  cout<<date<<"\t#"<<id<<" is created"<<endl;
}
// 记录一笔账，date为日期，amount为金额
void SavingAccount::record(int date, double amount)
{
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount * 100 + 0.5) / 100;  // 保留小数点后两位
  balance += amount;

}
// 存入现金
void SavingAccount::deposit(int date, double amount)
{
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount * 100 + 0.5) / 100;  // 保留小数点后两位
  balance += amount;
  cout<<date<<"\t#" <<id<<"\t"<<amount<<"\t"<<balance<<endl;
}
// 取出现金
void SavingAccount::withdraw(int date, double amount)
{
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount * 100 + 0.5) / 100;  // 保留小数点后两位
  balance -= amount;
}
// 利息结算，每年1月1日调用一次该函数
void SavingAccount::settle(int date)
{
  double interest = accumulate(date) * rate / 365; // 计算年息
  if(interest != 0)
  {
    record(date, interest);
  }
  accumulation = 0;
}
// 显示账户
void SavingAccount::show()
{
  cout<<"#"<<id<<"\tBalance: "<<balance<<endl;
}

int main()
{
  // 建立几个账户实例
  SavingAccount sa0(1, 21325302, 0.015);
  SavingAccount sa1(1, 51325312, 0.015);

  // 几笔账户
  sa0.deposit(5, 5000);
  sa1.deposit(25, 10000);
  sa0.deposit(45, 5500);
  sa1.withdraw(60, 4000);

  // 开户90天之后到了银行的计息日，结算所有账户的年息
  sa0.settle(90);
  sa0.settle(90);

  // 输出各个账户信息
  sa0.show();
  sa1.show();
  return 0;
}

