#include <bits/stdc++.h>
using namespace std;

class R
{
    int r1, r2;
  public:
    R(int r1, int r2):r1(r1),r2(r2)
    {
    }
    // const�����������������غ���
    void print() 
    {
    	cout<<"���÷ǳ���Ա����"<<endl; 
      cout<<r1<<":"<<r2<<endl;
    }
    void print() const
    {
    	cout<<"���ó���Ա����"<<endl; 
      cout<<"const--"<<r1<<":"<<r2<<endl;
    }
};

int main()
{
  R a(5, 4);
  a.print();// ����һ���Աor��Ա����������һ�����ȣ� 
  const R b(20, 52);
  b.print();// bֻ�ܵ��ó���Ա����
  return 0;
}

