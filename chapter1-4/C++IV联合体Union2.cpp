#include <bits/stdc++.h>
using namespace std;

class DataType
{
    enum
    {
      character,
      integer,
      floating_point
    } vartype;
    
    // union �ڵ����Թ���ͬһ���洢�ռ䣬�����i��ֵ֮���ָ�f��ֵ����ôi��ֵ����Ч�� 
    union
    {
      char c;
      int i;
      float f;
    };
  public:
    DataType(char ch)
    {
      vartype = character;
      c = ch;
    }
    DataType(int ii)
    {
      vartype = integer;
      i = ii;
    }
    DataType(float ff)
    {
      vartype = floating_point;
      f = ff;
    }
    void print();
};
void DataType::print()
{
  switch(vartype)
  {
    case character:
      cout<<"�ַ��ͣ�"<<c<<endl;
      break;
    case integer:
      cout<<"���ͣ�"<<i<<endl;
      break;
    case floating_point:
      cout<<"�����ࣺ"<<f<<endl;
      break;
  }
}

int main()
{
  DataType a('c'), b(12), c(1.44F);
  a.print();
  b.print();
  c.print();
  return 0;
}

