#include <bits/stdc++.h>
using namespace std;

int * fn1()
{
  // �Ӷ��Ϸ���һ��int�ͱ�����ռ���ֽ��ڴ�,��ֵΪ5
  // ���һ��Ҫ�ͷ��ڴ棺delete p;
  // ����Ƕ�������飬��ô�ͷ��ڴ�ʱ��delete []p; �����д[]ֻ���ͷ������һ��Ԫ�ص��ڴ�ռ�
  int * p = new int(5);
  return p;
}


// ���ú�����С����Ϊ�������֡�С�����ֲ�����
// ͬʱ��Ҫ���ض��ֵʱ�����Բ������õķ�ʽ
// ����ָ������Ϊ���洢���Ƕ����׵�ַ��ռ�ռ�С 
void splitFloat(float x, int *intPart, float *fracPart)
{
  *intPart = static_cast<int>(x);
  *fracPart = x - *intPart;
}



// ָ������ָ�룺����ָ��
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
  // &i: &�Ǽ����ַ���������&i��ʾ����i�Ĵ洢��ַ
  // �˴���*ptr ��һ��ָ�������ר�����ڴ�ŵ�ַ
  // int ��ʾָ����ָ��Ķ�������
  int* ptr = &i;
  // ���崦��*��ʾ��������Ϊָ�����
  // ���ʽ�е�*��ΪһԪ�����������ָ�����㣬����ptr����Ѱַ
  // ����ptrʱ���������int�ͣ�����3��ֵ��ȥ֮��Ӧ����ռ��int�ͱ���Ӧ��ռ�Ĵ�С
  *ptr = 3;
  // *��ָ������������ݵ�ַȥ����ָ����ָ����ڴ浥Ԫ
  // &����ַ������������ڴ�������߶���ĵ�ַ
  // * �� & �ǻ�Ϊ�������



  // ָ������ָ��
  int a = 1;
  const int * p1 = &a;
  int b;
  // ָ������ָ�룺ָ�뱾����Ըı䣬����ָ��Ķ��󲻿��Ըı�
  p1 = &b;
  // *p1 = 1;  ����


  // ָ�뱾����һ��������ָ�벻�ܱ䣬ָ��ָ��Ķ�����Ըı�
  int * const p2 = &a;
  // p2 = &b;  ����
  * p2 = 2;


  // *pa ��ʾa[0], *(pa+1) ��ʾa[1], *(pa+2) ��ʾa[2]
  short a[4];
  short *pa = a;


  // ָ�����������0�Ƚϣ��ж��Ƿ��ǿ�ָ��
  if(pa == 0)
  {
    cout<<"pa��һ����ָ�룡"
  }


  // ����ָ������Ԫ�ص�ָ��
  // a[i]   *(pa+i)    *(a+i)    pa[i]
  int a[10], *pa;
  pa = &a[0];
  pa = a;
  
  
  
  
  //  ����ָ�� 
//  Point a(4, 5);
//  Point *p1 = &a;
//  // ����ָ���������ʱ�������ֵ��÷�����һ��Ч��
//  cout<<p1->getX()<<endl;
//  cout<<(*p1).getX()<<endl;
//  cout<<a.getX()<<endl;
  
  
  
  // void����ָ�� 
// ���Զ���void���͵�ָ�룬��Ϊpv������ָ�����ͣ�voidֻ������ָ�����������
//  void *pv;
//  int i = 5;
//  pv = &i;
//  // ��ֵû�����⣬������ֱ��ȡֵ
//  int *pint = static_cast<int *>(pv);
//  cout<<*pint<<endl;

  
  
  // ָ�����ַ����� 
//  int a;
//  int *p = &a;
//  int &r = a;
//  *p = 10;
//  cout<<a<<" "<<r<<" "<<*p<<endl;  // 10 10 10 
//  r = 5;
//  cout<<a<<" "<<r<<" "<<*p<<endl;  // 5 5 5 




// ָ�뺯�� 
//  int * a = fn1();
//  cout<<"a = "<<*a<<endl;
//  delete a;





// ָ������ 
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





// ��ά�����ָ��
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


// ����ָ������ 
//  int array[3] = {1, 2, 3};
//  int *p;
//  for(p = array; p < array + sizeof(array) / sizeof(int); ++p)
//  {
//    *p += 2;
//    std::cout<<*p<<std::endl;
//  }
//
//  // ���ڷ�Χ��forѭ��
//  for(int & e:array)
//  {
//    e += 2;
//    std::cout<<e<<std::endl;
//  }
  
  



//ָ����Ϊ��������
//  float a = 12.3;
//  int n;
//  float f;
//  splitFloat(a, &n, &f);
//  cout<<n<<" "<<f<<endl;


//  ����ָ�� 
// �˴�д&���߲�д��û�й�ϵ
//  cout<<compute(12, 6, &max)<<" "<<compute(12, 6, min)<<" "<<compute(12, 6, &sum)<<endl;
  
  
  
  
  
  
  
  
  

  return 0;
}

