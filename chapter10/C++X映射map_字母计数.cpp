#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<char, int> s;
  char c;
  do
  {
    cin>>c;
    if(isalpha(c))  // 判断是否是字母
    {
      c = tolower(c);
      // 将该字母的出现频率+1
      s[c]++;
    }
  }
  while(c != '.');
  // 输出所有字母出现的次数
  for(map<char, int>::iterator iter = s.begin(); iter != s.end(); iter++)
  {
    cout<<iter->first<<":"<<iter->second<<", ";
  }
  cout<<endl;

  return 0;
}

