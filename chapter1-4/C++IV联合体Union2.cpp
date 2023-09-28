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
    
    // union 内的属性公用同一个存储空间，如果给i赋值之后又给f赋值，那么i的值就无效了 
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
      cout<<"字符型："<<c<<endl;
      break;
    case integer:
      cout<<"整型："<<i<<endl;
      break;
    case floating_point:
      cout<<"浮点类："<<f<<endl;
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

