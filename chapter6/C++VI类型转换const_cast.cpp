#include <bits/stdc++.h>
using namespace std;

class B
{
  public:
    B() { }
  public:
    int m_iNum;
};
void foo()
{
  const B b1;
  //b1.m_iNum = 100; //compile error
  // ����������ת�������ֳ�ת��Ϊָ������
  B *b2 = const_cast<B*>(&b1);
  // �������Ҳ�������������ͣ������b2��b3�����ݳ�Ա���ı䣬���Ƕ�b1��ֵ�����ı�
  B &b3 = const_cast<B&>(b1);
  b2->m_iNum = 200;    //fine
  cout<<(b1.m_iNum)<<endl;
  b3.m_iNum = 300;    //fine
  cout<<(b1.m_iNum)<<endl;
  // ���´�����������Ϊb1�ǳ����󣬲��ɱ�
//  b1.m_iNum = 100;
  cout<<(b1.m_iNum)<<endl;
}
int main( int argc, char * argv[] )
{
  foo();
  return 0;
}
