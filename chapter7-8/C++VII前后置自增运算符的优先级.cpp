#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i = 0;
  ++i = 3;
//  i++ = 3;  // �������
  cout<<i<<endl; // i = 3;
  
  
   // ǰ�������ȼ���ͬ�����ǽ�����Ǵ��ҵ������Ժ�����Ƚ�������
   // ����Ϊ i++ ���ص���һ����ֵ���������ڽ���ǰ���������㣬���Ա��� 
//  ++i++;  // error 
//  ++(i++);   // error

 int j = (++i)++;
  cout<<i<<" "<<j<<endl;   // i = 5 , j = 4
  
  return 0;
}

