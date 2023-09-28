#include <bits/stdc++.h>
using namespace std;

int * fn1()
{
  // 从堆上分配一个int型变量所占的字节内存,数值为5
  // 最后一定要释放内存：delete p;
  // 如果是定义的数组，那么释放内存时：delete []p; 如果不写[]只会释放数组第一个元素的内存空间
  int * p = new int(5);
  return p;
}


// 调用函数将小数分为整数部分、小数部分并传回
// 同时需要传回多个值时，可以采用引用的方式
// 采用指针是因为它存储的是对象首地址，占空间小 
void splitFloat(float x, int *intPart, float *fracPart)
{
  *intPart = static_cast<int>(x);
  *fracPart = x - *intPart;
}



// 指向函数的指针：函数指针
int compute(int a, int b, int(*func)(int, int))
{
  return func(a, b);
}

int max(int a, int b)
{
  return ((a > b) ? a : b);
}
int min(int a, int b)
{
  return ((a < b) ? a : b);
}
int sum(int a, int b)
{
  return a + b;
}


int main()
{
  int i;
  // &i: &是计算地址的运算符，&i表示变量i的存储地址
  // 此处的*ptr 是一个指针变量，专门用于存放地址
  // int 表示指针所指向的对象类型
  int* ptr = &i;
  // 定义处的*表示数据类型为指针变量
  // 表达式中的*作为一元运算符，进行指针运算，根据ptr进行寻址
  // 定义ptr时，定义成了int型，所以3赋值进去之后应该是占了int型变量应该占的大小
  *ptr = 3;
  // *：指针运算符，根据地址去访问指针所指向的内存单元
  // &：地址运算符，返回内存变量或者对象的地址
  // * 与 & 是互为逆运算的



  // 指向常量的指针
  int a = 1;
  const int * p1 = &a;
  int b;
  // 指向常量的指针：指针本身可以改变，但是指向的对象不可以改变
  p1 = &b;
  // *p1 = 1;  错误


  // 指针本身是一个常量，指针不能变，指针指向的对象可以改变
  int * const p2 = &a;
  // p2 = &b;  错误
  * p2 = 2;


  // *pa 表示a[0], *(pa+1) 表示a[1], *(pa+2) 表示a[2]
  short a[4];
  short *pa = a;


  // 指针可以与整数0比较，判断是否是空指针
  if(pa == 0)
  {
    cout<<"pa是一个空指针！"
  }


  // 定义指向数组元素的指针
  // a[i]   *(pa+i)    *(a+i)    pa[i]
  int a[10], *pa;
  pa = &a[0];
  pa = a;
  
  
  
  
  //  对象指针 
//  Point a(4, 5);
//  Point *p1 = &a;
//  // 对象指针调用属性时，这两种调用方法是一个效果
//  cout<<p1->getX()<<endl;
//  cout<<(*p1).getX()<<endl;
//  cout<<a.getX()<<endl;
  
  
  
  // void类型指针 
// 可以定义void类型的指针，因为pv本身是指针类型，void只是它所指向的数据类型
//  void *pv;
//  int i = 5;
//  pv = &i;
//  // 赋值没有问题，但不能直接取值
//  int *pint = static_cast<int *>(pv);
//  cout<<*pint<<endl;

  
  
  // 指针与地址运算符 
//  int a;
//  int *p = &a;
//  int &r = a;
//  *p = 10;
//  cout<<a<<" "<<r<<" "<<*p<<endl;  // 10 10 10 
//  r = 5;
//  cout<<a<<" "<<r<<" "<<*p<<endl;  // 5 5 5 




// 指针函数 
//  int * a = fn1();
//  cout<<"a = "<<*a<<endl;
//  delete a;





// 指针数组 
//  int line1[] = {1, 0, 0};
//  int line2[] = {0, 1, 0};
//  int line3[] = {0, 0, 1};
//
//  int *pLine[3] = {line1, line2, line3};
//
//  for(int i = 0; i < 3; i++)
//  {
//    for(int j = 0; j < 3; j++)
//    {
//      cout<<pLine[i][j]<<" ";
//    }
//    cout<<endl;
//  }





// 多维数组的指针
//  int (*cp)[2][3] = new int[2][2][3];
//  for(int i = 0; i < 2; i++)
//  {
//    for(int j = 0; j < 2; j++)
//    {
//      for(int k = 0; k < 3; k++)
//      {
//        *(*(*(cp + i) + j) + k) = i * 100 + j * 10 + k;
//      }
//    }
//  }
//  for(int i = 0; i < 2; i++)
//  {
//    for(int j = 0; j < 2; j++)
//    {
//      for(int k = 0; k < 3; k++)
//      {
//        cout<<setw(6)<<cp[i][j][k];
//      }
//      cout<<endl;
//    }
//    cout<<endl;
//  }
//  delete[] cp;


// 遍历指针数组 
//  int array[3] = {1, 2, 3};
//  int *p;
//  for(p = array; p < array + sizeof(array) / sizeof(int); ++p)
//  {
//    *p += 2;
//    std::cout<<*p<<std::endl;
//  }
//
//  // 基于范围的for循环
//  for(int & e:array)
//  {
//    e += 2;
//    std::cout<<e<<std::endl;
//  }
  
  



//指针作为函数参数
//  float a = 12.3;
//  int n;
//  float f;
//  splitFloat(a, &n, &f);
//  cout<<n<<" "<<f<<endl;


//  函数指针 
// 此处写&或者不写都没有关系
//  cout<<compute(12, 6, &max)<<" "<<compute(12, 6, min)<<" "<<compute(12, 6, &sum)<<endl;
  
  
  
  
  
  
  
  
  

  return 0;
}

