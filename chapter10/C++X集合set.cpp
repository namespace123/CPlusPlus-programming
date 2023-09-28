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
    // pair��һ��Сstruct���������������һ�����ݣ�����������ʾmap��Ҳ������ͬʱ����������������ֵ
    // �˴�ֻ�ǳ��Բ���
    pair<set<double>::iterator, bool> r = s.insert(v);
    // ���v�Ѵ��ڣ������ʧ��
    if(!r.second)
    {
      cout<<v<<" is duplicated"<<endl;
    }
  }
  // set���Զ������ܣ���С����
  cout<<"all: ";
  copy(s.begin(), s.end(), ostream_iterator<double>(cout, " "));
  cout<<endl;
  set<double>::iterator iter1 = s.begin();
  set<double>::iterator iter2 = s.end();
  double medium = (*iter1 + *(--iter2)) / 2;
  cout<<"<= medium: ";
  // upper_bound:����>medium�ĵ�һ��Ԫ�ص�λ��
  copy(s.begin(), s.upper_bound(medium), ostream_iterator<double>(cout, " "));
  cout<<endl;
  cout<<">= medium: ";
  // lower_bound:����>=medium�ĵ�һ��Ԫ�ص�λ��
  copy(s.lower_bound(medium), s.end(), ostream_iterator<double>(cout, " "));
  cout<<endl;
  return 0;
}

