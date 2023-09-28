#include <bits/stdc++.h>
using namespace std;

class IntNum
{
    int *xptr;
  public:
    IntNum(int x = 0):xptr(new int(x))
    {
      cout<<"construction..."<<endl;
    }
    // ��㸴�������ƶ���
    // newһ��int�ͱ����ռ������ n.xptr��ָ���ֵ
    IntNum(const IntNum & n):xptr(new int(*n.xptr))
    {
      cout<<"copy construction..."<<endl;
    }
    // �ƶ����캯��
    // һ��ǳ�㸴��
    // && ����ֵ���ã���ֵ�����������Ķ���
    IntNum(IntNum && n):xptr(n.xptr)
    {
      n.xptr = nullptr;
      cout<<"move construction..."<<endl;
    }
    ~IntNum()
    {
      delete xptr;
      cout<<"delete..."<<endl;
    }
    int getInt()
    {
      return *xptr;
    }
};
IntNum getNum()
{
  IntNum a;
  return a;
}

int main()
{
  cout<<getNum().getInt()<<endl;
  return 0;
}

