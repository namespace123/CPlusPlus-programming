#include <bits/stdc++.h>
using namespace std;
/*�ȶ����㹫ʽ��
ÿ�»�����=������� �»���������+������ - �ѹ黹�����ۼƶ��ÿ������*/

// ������λС��
double floor_2(double a)
{
  return floor(a * 100 + 0.5) / 100.0;
}

int main()
{
  double loan_A = 10000.00;  // ������A�Ĵ����
  double loan_B = 20000.00;  // ������B�Ĵ����
  double month_rate_A = 0.04;  // ����A������
  double month_rate_B = 0.045;  // ����B������
  int loan_months = 12;  // �ȶ�� ����12����
  vector<double> a(loan_months);  // ����A���ӽǣ�������Ӧ������
  vector<double> b(loan_months);  // ����B���ӽǣ�������Ӧ������
  vector<double> x(loan_months);  // С�����ӽǣ�������Ӧ������
  cout<<"С�������Ͻ��¡�������һ���ֽ�������װ��, ����A���г��ʽ�"
      <<loan_A<<"Ԫ��B���г��ʽ�"<<loan_B<<"Ԫ�������ܹ�"<<loan_months<<"��"<<endl<<endl;
  cout<<"��֪������A������Ϊ "<<month_rate_A<<", ����B������Ϊ "<<month_rate_B<<endl<<endl;
  double each_monthA = floor_2(loan_A / loan_months);
  double each_monthB = floor_2(loan_B / loan_months);
  cout<<"�ڴκ�\t"<<"����A�ӽǻ����\t"<<"����B�ӽǻ����\t"<<"С�������ӽ�"<<endl<<endl;

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






//// ���л���
//class Bank
//{
//    double rate;  // ����
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
//// ��������
//class Bank1: public Bank
//{
//    double loan;  // ���
//    int month; // �������
//  public:
//    Bank1(double loan, double rate):loan(loan)
//    {
//    	Bank(rate);
//        cout<<"���������н��"<<loan<<"Ԫ, ��12���µ�����Ϊ"<<rate<<endl;
//    }
//    virtual ~Bank1()
//    {
//    }
//};
//
//// X����
//class Bank1: public Bank
//{
//    double loan;  // ���
//    int month; // �������
//  public:
//    Bank1(double loan, double rate):loan(loan)
//    {
//    	Bank(rate);
//        cout<<"���������н��"<<loan<<"Ԫ, ��12���µ�����Ϊ"<<rate<<endl;
//    }
//    virtual ~Bank1()
//    {
//    }
//};
