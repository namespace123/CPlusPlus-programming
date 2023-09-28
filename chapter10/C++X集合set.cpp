#include <utility>
#include<set>
#include<iterator>
#include<iostream>
using namespace std;

int main()
{
  set<double> s;
  while(true)
  {
    double v;
    cin >> v;
    if(v == 0)
    {
      break;
    }
    // pair是一个小struct，将两个数据组成一个数据，可以用来表示map，也可用来同时返回两个函数返回值
    // 此处只是尝试插入
    pair<set<double>::iterator, bool> r = s.insert(v);
    // 如果v已存在，则插入失败
    if(!r.second)
    {
      cout<<v<<" is duplicated"<<endl;
    }
  }
  // set有自动排序功能，从小到大
  cout<<"all: ";
  copy(s.begin(), s.end(), ostream_iterator<double>(cout, " "));
  cout<<endl;
  set<double>::iterator iter1 = s.begin();
  set<double>::iterator iter2 = s.end();
  double medium = (*iter1 + *(--iter2)) / 2;
  cout<<"<= medium: ";
  // upper_bound:返回>medium的第一个元素的位置
  copy(s.begin(), s.upper_bound(medium), ostream_iterator<double>(cout, " "));
  cout<<endl;
  cout<<">= medium: ";
  // lower_bound:返回>=medium的第一个元素的位置
  copy(s.lower_bound(medium), s.end(), ostream_iterator<double>(cout, " "));
  cout<<endl;
  return 0;
}

