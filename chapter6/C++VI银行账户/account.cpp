#include <bits/stdc++.h>
#include "account.h"
using namespace std;

double SavingAccount::total = 0;

// 建立账户
SavingAccount::SavingAccount(Date date, string id, double rate):id(id),balance(balance),rate(rate),lastDate(date),accumulation(0)
{
  cout<<date.show()<<"\t#"<<id<<" is created"<<endl;
}
// 记录一笔账，date为日期，amount为金额
void SavingAccount::record(Date date, double amount, string description)
{
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount * 100 + 0.5) / 100;  // 保留小数点后两位
  balance += amount;
  total += amount;
  cout<<date.show()<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<"\t"<<description<<endl;
}
// 存入现金
void SavingAccount::deposit(Date date, double amount, string description)
{
  record(date, amount, description);
}
// 取出现金
void SavingAccount::withdraw(Date date, double amount, string description)
{
  if(amount > getBalance())
  {
    cout<<"Error: not enough money"<<endl;
  }
  else
  {
    record(date, -amount, description);
  }
}
// 利息结算，每年1月1日调用一次该函数
void SavingAccount::settle(Date date)
{
  double interest = accumulate(date) * rate / 365; // 计算年息
  if(interest != 0)
  {
    record(date, interest, "年终利息结算");
  }
  accumulation = 0;
}
// 显示账户
void SavingAccount::show()
{
  cout<<"#"<<id<<"\tBalance: "<<balance<<endl;
}



