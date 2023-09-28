#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

// �������Զ���ıȽϷ����������Զ���� < ����������������Ӧ�е�����Ӧ������С���� 
inline bool lt_nocase(char c1, char c2) { 
    return tolower(c1) < tolower(c2); 
}

int main()
{
    // ��Щ���ж�����������ģ�����Ĭ�ϻ��Զ���ıȽϹ���������� 
  int A1[] = {1, 3, 5, 7, 9, 11};
  int A2[] = {1, 1, 2, 3, 5, 8, 13};  
  // �������������޸ģ���������Կ������Ӵ�Сд���Կ�����ȡ�����Ľ���Ǹ�����A3������A4��set_intersection���ȶ��Ծͱ��������� 
  char A3[] = {'a', 'B', 'b', 'B', 'B', 'f', 'h', 'H'};
  char A4[] = {'A', 'B', 'B', 'C', 'D', 'F', 'F', 'H' };

  const int N1 = sizeof(A1) / sizeof(int);
  const int N2 = sizeof(A2) / sizeof(int); 
  const int N3 = sizeof(A3);
  const int N4 = sizeof(A4);

 // ��������� set_intersection �����ֱȽϷ�ʽ 
  cout << "Intersection of A1 and A2: ";
  set_intersection(A1, A1 + N1, A2, A2 + N2, ostream_iterator<int>(cout, " "));
  cout << endl << "Intersection of A3 and A4: ";
  set_intersection(A3, A3 + N3, A4, A4 + N4, ostream_iterator<char>(cout, " "), lt_nocase);
  cout << endl;
  
  /*������鲻������ģ�����ִ����⣬A5��һ������12���� A6 ������Ԫ�ض���
   ����STL��Ĭ��Ϊ���д�С��������ģ�������Ȼ������ȥ�Ƚ� A5 �е�����Ԫ�أ����Է��صĽ���Ϊ�� */
   int A5[] = {12, 1, 3, 5, 7, 9};
  int A6[] = {1, 1, 2, 3, 5, 8, 11};  
  cout << "Intersection of A5 and A6: ";
  set_intersection(A5, A5 + N1, A6, A6 + N2, ostream_iterator<int>(cout, " "));
} 
