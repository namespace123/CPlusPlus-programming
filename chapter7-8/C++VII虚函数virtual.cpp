#include <bits/stdc++.h>
using namespace std;

class Base
{
  public:
    // ����Ϊvirtualʱ������������д�ú���ʱ���ú������Զ���Ϊ�麯��
    void test()
    {
      cout<<"���෽��1��"<<endl;
    }
    // ��������������������麯�����������ɶ����ͷŴ��������
    virtual ~Base()
    {
    }
};
class Base2
{
  public:
    // ����Ϊvirtualʱ������������д�ú���ʱ���ú������Զ���Ϊ�麯��
    void test2()
    {
      cout<<"���෽��2��"<<endl;
    }
    // ��������������������麯�����������ɶ����ͷŴ��������
    virtual ~Base2()
    {
    }
};

// �ֱ���public�ķ�ʽ�̳�Base��Base2������
class Inheriter: public Base, public Base2
{
  public:
    void test()
    {
      cout<<"�����෽��1��"<<endl;
    }
    void test2()
    {
      cout<<"�����෽��2��"<<endl;
    }
};

int main()
{
  Base *p1 = new Base;
  Base *p2 = new Inheriter;
  p1->test();
  p2->test();
  // �麯����ʹ�ý����������ռ�ø�����ڴ�ռ� 
  // ��������ռ�洢�ռ� = ���л�����������Գ�Ա + ���л�����麯��ָ�루һ��������1or0���麯��ָ�룩+ �����౾������Գ�Ա
  cout<<"Base: "<<sizeof(Base)<<", Inheriter: "<<sizeof(Inheriter)<<endl;
  return 0;
}

