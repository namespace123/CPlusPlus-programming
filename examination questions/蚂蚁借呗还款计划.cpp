#include <bits/stdc++.h>
using namespace std;
/*等额本金计算公式：
每月还款金额=（贷款本金 ÷还款月数）+（本金 - 已归还本金累计额）×每月利率*/

// 保留两位小数
double floor_2(double a)
{
  return floor(a * 100 + 0.5) / 100.0;
}

int main()
{
  double loan_A = 10000.00;  // 在银行A的贷款额
  double loan_B = 20000.00;  // 在银行B的贷款额
  double month_rate_A = 0.04;  // 银行A的利率
  double month_rate_B = 0.045;  // 银行B的利率
  int loan_months = 12;  // 等额本金 贷款12个月
  vector<double> a(loan_months);  // 银行A的视角，各个月应还款金额
  vector<double> b(loan_months);  // 银行B的视角，各个月应还款金额
  vector<double> x(loan_months);  // 小明的视角，各个月应还款金额
  cout<<"小明向【蚂蚁借呗】申请了一笔现金借款用于装修, 其中A银行出资金额："
      <<loan_A<<"元，B银行出资金额："<<loan_B<<"元；贷款总共"<<loan_months<<"期"<<endl<<endl;
  cout<<"已知：银行A月利率为 "<<month_rate_A<<", 银行B月利率为 "<<month_rate_B<<endl<<endl;
  double each_monthA = floor_2(loan_A / loan_months);
  double each_monthB = floor_2(loan_B / loan_months);
  cout<<"期次号\t"<<"银行A视角还款本金\t"<<"银行B视角还款本金\t"<<"小明还款视角"<<endl<<endl;

  vector<double> rate(loan_months);
  double each_monthX = each_monthA + each_monthB;
  for(int i = 0; i < loan_months; i++)
  {

    a[i] = floor_2((each_monthA + (loan_A - i * each_monthA) * month_rate_A));
    b[i] = floor_2((each_monthB + (loan_B - i * each_monthB) * month_rate_B));
    x[i] = a[i] + b[i];

    rate[i] = (x[i] - each_monthX) / (loan_A + loan_B - i * (each_monthA + each_monthB));

    cout<<(i+1)<<"\t"<<a[i]<<"\t\t\t"<<b[i]<<"\t\t\t"<<x[i]<<"\t\t"<<rate[i]<<endl;
  }
  return 0;
}






//// 银行基类
//class Bank
//{
//    double rate;  // 利率
//  public:
//    Bank(double rate = 0):rate(rate)
//    {
//    }
//    virtual ~Bank()
//    {
//    }
//    double getRate() const
//    {
//      return rate;
//    }
//};
//
//// 网商银行
//class Bank1: public Bank
//{
//    double loan;  // 借款
//    int month; // 借款月数
//  public:
//    Bank1(double loan, double rate):loan(loan)
//    {
//    	Bank(rate);
//        cout<<"向网商银行借贷"<<loan<<"元, 借12个月的利率为"<<rate<<endl;
//    }
//    virtual ~Bank1()
//    {
//    }
//};
//
//// X银行
//class Bank1: public Bank
//{
//    double loan;  // 借款
//    int month; // 借款月数
//  public:
//    Bank1(double loan, double rate):loan(loan)
//    {
//    	Bank(rate);
//        cout<<"向网商银行借贷"<<loan<<"元, 借12个月的利率为"<<rate<<endl;
//    }
//    virtual ~Bank1()
//    {
//    }
//};
