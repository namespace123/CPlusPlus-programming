#include <bits/stdc++.h>
using namespace std;

int main()
{
  string name1[] = {"Alice", "Helen", "Lucy", "Susan"};
  string name2[] = {"Bob", "David", "Levin", "Mike"};
  list<string> s1(name1, name1+4);
  list<string> s2(name2, name2+4);

  // 从s1去除第一个元素，并将去除的该元素加到s2尾部，这个操作对s1和s2的长短都有影响
  s2.splice(s2.end(), s1, s1.begin());
  list<string>::iterator iter1 = s1.begin();
  // 将iter2迭代器前进两个元素
  advance(iter1, 2);
  list<string>::iterator iter2 = s2.begin();
  iter2++;
  list<string>::iterator iter3 = iter2;
  advance(iter3, 2);
  // 从s1去除[iter2, iter3)区间的元素，并将去除的元素加到s2的iter1前面的位置，这个操作对s1和s2的长短都有影响
  s1.splice(iter1, s2, iter2, iter3);

  copy(s1.begin(), s1.end(), ostream_iterator<string>(cout, " "));
  cout<<endl;
  copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, " "));
  cout<<endl;
  return 0;
}

