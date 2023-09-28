#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
using namespace std;
#include "date.h"
#include "date.cpp"

class SavingAccount   //�����˻���
{
    string id;  // �˺�
    double balance;  // ���
    double rate;  // ����������
    Date lastDate;  //�ϴα������ʱ��
    double accumulation; //�����ۼ�֮��
    static double total;  // �����˻����ܽ��

    // ��¼һ���ˣ�dateΪ���ڣ�amountΪ���
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
    //static ��Ա�������ܱ�������const��volatile����const volatile
    static double getTotal()
    {
      return total;
    }

    // �����ֽ�
    void deposit(Date date, double amount, string description);


//void SavingAccount::deposit(Date date, double amount, string description)
//{
//  record(date, amount, description);
//}
//

    // ȡ���ֽ�
    void withdraw(Date date, double amount, string description);
    // ��Ϣ���㣬ÿ��1��1�յ���һ�θú���
    void settle(Date date);
    // ��ʾ�˻�
    void show();
    // �������
    void error(string msg);
};

#endif
