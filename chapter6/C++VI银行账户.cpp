#include <bits/stdc++.h>
using namespace std;
class SavingAccount
{
    int id;
    double balance;  // ���
    double rate;  // ����
    int lastDate;  //�ϴα������ʱ��
    double accumulation; //�����ۼ�֮��

    // ��¼һ���ˣ�dateΪ���ڣ�amountΪ���
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

    // �����ֽ�
    void deposit(int date, double amount);
    // ȡ���ֽ�
    void withdraw(int date, double amount);
    // ��Ϣ���㣬ÿ��1��1�յ���һ�θú���
    void settle(int date);
    // ��ʾ�˻�
    void show();
};
// �����˻�
SavingAccount::SavingAccount(int date, int id, double rate):id(id),balance(balance),rate(rate),lastDate(date),accumulation(0)
{
  cout<<date<<"\t#"<<id<<" is created"<<endl;
}
// ��¼һ���ˣ�dateΪ���ڣ�amountΪ���
void SavingAccount::record(int date, double amount)
{
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount * 100 + 0.5) / 100;  // ����С�������λ
  balance += amount;

}
// �����ֽ�
void SavingAccount::deposit(int date, double amount)
{
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount * 100 + 0.5) / 100;  // ����С�������λ
  balance += amount;
  cout<<date<<"\t#" <<id<<"\t"<<amount<<"\t"<<balance<<endl;
}
// ȡ���ֽ�
void SavingAccount::withdraw(int date, double amount)
{
  accumulation = accumulate(date);
  lastDate = date;
  amount = floor(amount * 100 + 0.5) / 100;  // ����С�������λ
  balance -= amount;
}
// ��Ϣ���㣬ÿ��1��1�յ���һ�θú���
void SavingAccount::settle(int date)
{
  double interest = accumulate(date) * rate / 365; // ������Ϣ
  if(interest != 0)
  {
    record(date, interest);
  }
  accumulation = 0;
}
// ��ʾ�˻�
void SavingAccount::show()
{
  cout<<"#"<<id<<"\tBalance: "<<balance<<endl;
}

int main()
{
  // ���������˻�ʵ��
  SavingAccount sa0(1, 21325302, 0.015);
  SavingAccount sa1(1, 51325312, 0.015);

  // �����˻�
  sa0.deposit(5, 5000);
  sa1.deposit(25, 10000);
  sa0.deposit(45, 5500);
  sa1.withdraw(60, 4000);

  // ����90��֮�������еļ�Ϣ�գ����������˻�����Ϣ
  sa0.settle(90);
  sa0.settle(90);

  // ��������˻���Ϣ
  sa0.show();
  sa1.show();
  return 0;
}

