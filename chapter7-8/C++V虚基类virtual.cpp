#include <bits/stdc++.h>
using namespace std;

class base
{
    int b;
  public:
    // ����Ϊvirtualʱ������������д�ú���ʱ���ú������Զ���Ϊ�麯��
    virtual void test()
    {
      cout<<"���෽����"<<endl;
    }
    // ��������������������麯�����������ɶ����ͷŴ��������
    virtual ~base()
    {
    }
};

class mytest:virtual public base
{

};
class mytest2:virtual public base
{

};
class mytest3:public mytest, public mytest2
{

};

int main()
{
  // base��С = ���� + �麯��ָ�� = 8 
  // mytest��С = mytest2��С = �������� + ������麯��ָ�� + �����ָ�� = 12
  // mytest3��С = sizeof(base)+sizeof(mytest-base)+sizeof(mytest2-base) = 16
  // �˴��������virtual����ȥ�ص���Ҫ�ԣ��ظ��̳еĲ���ֻ��һ���� 
  cout<<"base: "<<sizeof(base)<<", mytest: "<<sizeof(mytest)<<", mytest2: "
      <<sizeof(mytest2)<<", mytest3: "<<sizeof(mytest3)<<endl;
  return 0;
}

