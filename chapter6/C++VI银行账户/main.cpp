#include <bits/stdc++.h>
#include "account.h"
#include "account.cpp"
using namespace std;

int main()
{
  Date date(2008, 11, 1);
  // ���������˻�ʵ��
  SavingAccount accounts[] =
  {
    SavingAccount(date, "21325302", 0.015),
    SavingAccount(date, "51325312", 0.015)
  };

  const int n = sizeof(accounts) / sizeof(SavingAccount);  // �˻�����

  // 11�·ݵļ�����Ŀ
  accounts[0].deposit(Date(2008, 11, 5), 5000, "salary");
  accounts[1].deposit(Date(2008, 11, 25), 10000, "sell stock 0323");

  // 12�·ݵļ�����Ŀ
  accounts[0].deposit(Date(2008, 12, 5), 5500, "salary");
  accounts[1].withdraw(Date(2008, 12, 20), 4000, "buy a laptop");

  // ���������˻�����������˻���Ϣ
  cout<<endl;
  for(int i = 0; i < n; i++)
  {
    accounts[i].settle(Date(2009, 1, 1));
    accounts[i].show();
    cout<<endl;
  }

  cout<<"Total: "<<SavingAccount::getTotal()<<endl;
  return 0;
}
