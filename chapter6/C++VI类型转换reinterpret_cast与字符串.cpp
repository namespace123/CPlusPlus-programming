#include <bits/stdc++.h>
using namespace std;

int main()
{
//  char* b = "afah";
  char a[40];
  // �ַ���תchar*�����ַ�ʽ
//  strcpy(a, b);
  strcpy(a, "jhkfjh");
  cout<<a<<endl;


// ǿ��ת��ʱ����ע�⡣ת������֮��Ĵ�С���
  int arr[] = {1, 2, 3};
  // �������������
  // reinterpret_cast���ڴ����޹�����֮���ת��
  // �������׵�ַǿ����ת��Ϊdouble   �鱾p95 
  // �������һ��Ԫ�ص���ʼλ�ø���doubleָ�룬��double����ռ8���ֽڣ���int��ֻ��4���ֽڣ�
  // ��ô����ͻ����ذ� arr[0] arr[1] ռ�Ŀռ俴����һ��double���ͱ����ռ� 
  double *p = reinterpret_cast<double *>(&arr[0]);
  *p = 5;
  cout<<arr[0]<<"  "<<arr[1]<<"  "<<arr[2]<<endl;

  return 0;
}

