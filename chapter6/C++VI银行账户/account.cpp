#include <bits/stdc++.h>
#include "account.h"
using namespace std;

double SavingAccount::total = 0;

// �����˻�
SavingAccount::SavingAccount(Date date, string id, double rate):id(id),balance(balance),rate(rate),lastDate(date),accumulation(0)
{
  cout<<date.show()<<"\t#"<<id<<" is created"<<endl;
}
// ��¼һ���ˣ�dateΪ���ڣ�amountΪ���
void SavingAccount::record(Date date, double amount, string description)
{
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount * 100 + 0.5) / 100;  // ����С�������λ
  balance += amount;
  total += amount;
  cout<<date.show()<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<"\t"<<description<<endl;
}
// �����ֽ�
void SavingAccount::deposit(Date date, double amount, string description)
{
  record(date, amount, description);
}
// ȡ���ֽ�
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
// ��Ϣ���㣬ÿ��1��1�յ���һ�θú���
void SavingAccount::settle(Date date)
{
  double interest = accumulate(date) * rate / 365; // ������Ϣ
  if(interest != 0)
  {
    record(date, interest, "������Ϣ����");
  }
  accumulation = 0;
}
// ��ʾ�˻�
void SavingAccount::show()
{
  cout<<"#"<<id<<"\tBalance: "<<balance<<endl;
}



