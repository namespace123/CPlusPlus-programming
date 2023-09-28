#include <bits/stdc++.h>
using namespace std;

int main()
{
  string name1[] = {"Alice", "Helen", "Lucy", "Susan"};
  string name2[] = {"Bob", "David", "Levin", "Mike"};
  list<string> s1(name1, name1+4);
  list<string> s2(name2, name2+4);

  // ��s1ȥ����һ��Ԫ�أ�����ȥ���ĸ�Ԫ�ؼӵ�s2β�������������s1��s2�ĳ��̶���Ӱ��
  s2.splice(s2.end(), s1, s1.begin());
  list<string>::iterator iter1 = s1.begin();
  // ��iter2������ǰ������Ԫ��
  advance(iter1, 2);
  list<string>::iterator iter2 = s2.begin();
  iter2++;
  list<string>::iterator iter3 = iter2;
  advance(iter3, 2);
  // ��s1ȥ��[iter2, iter3)�����Ԫ�أ�����ȥ����Ԫ�ؼӵ�s2��iter1ǰ���λ�ã����������s1��s2�ĳ��̶���Ӱ��
  s1.splice(iter1, s2, iter2, iter3);

  copy(s1.begin(), s1.end(), ostream_iterator<string>(cout, " "));
  cout<<endl;
  copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, " "));
  cout<<endl;
  return 0;
}

