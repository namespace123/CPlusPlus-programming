#include <bits/stdc++.h>
using namespace std;

// ���⽫�ֲ��Ǿ�̬�����ĵ�ַ��Ϊ��������ֵ
// ָ�����͵ĺ�����Ӧ���غϷ�����Ч��ַ
int main()
{
  int array[3] = {1, 2, 3};
  int* search(int* a, int num);
  int* z = search(array, 3);
  cout<<z<<endl;


  int* newintvar();
  int* intptr = newintvar();
  *intptr = 5;
  cout<<intptr<<endl;
  // ���������з��ص�new�����ĵ�ַ���������в��������ͷ�
  delete intptr;
  //  delete���ͷſռ䣬������ɾ��ָ�� 
  cout<<intptr<<endl;

  return 0;
}

// �Ӻ����������֮���������ɴ��ڣ���������صĵ�ַҲ����Ч��
int* search(int* a, int num)
{
  for(int i = 0; i < num; i++)
  {
    if(a[i] == 2)
    {
      return &a[i];
    }
  }
}

// ��new����ȡ�õ��ڴ�ռ䣬�������ͷžͻ�һֱ���ڣ�����Ҳ�ǿ�����Ϊ����ֵ�ģ�����������������Ҫ�ǵ��ͷţ����������ڴ�й©
int* newintvar()
{
  int* p = new int();
  return p;
}
