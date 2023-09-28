#include <bits/stdc++.h>
using namespace std;

int main()
{
  istream_iterator<int> i1(cin), i2;
  // 输入"EOF"时表示输入结束
  vector<int> s1(i1, i2);
  sort(s1.begin(), s1.end());
  deque<int> s2;
  for(vector<int>::iterator iter = s1.begin(); iter != s1.end(); iter++)
  {
    //偶数从尾部插入，奇数从头部插入
    if(*iter % 2 == 0)
    {
      s2.push_back(*iter);
    }
    else
    {
      s2.push_front(*iter);
    }
  }
  copy(s2.begin(), s2.end(), ostream_iterator<int>(cout, " "));
  cout<<endl;
  return 0;
}

