#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<char, int> s;
  char c;
  do
  {
    cin>>c;
    if(isalpha(c))  // �ж��Ƿ�����ĸ
    {
      c = tolower(c);
      // ������ĸ�ĳ���Ƶ��+1
      s[c]++;
    }
  }
  while(c != '.');
  // ���������ĸ���ֵĴ���
  for(map<char, int>::iterator iter = s.begin(); iter != s.end(); iter++)
  {
    cout<<iter->first<<":"<<iter->second<<", ";
  }
  cout<<endl;

  return 0;
}

