#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> courses;
  courses.insert(make_pair("CSAPP", 3));
  courses.insert(make_pair("C++", 2));
  courses.insert(make_pair("CSARCH", 4));
  courses.insert(make_pair("COMPILER", 4));
  courses.insert(make_pair("OS", 5));
  // 可选课数：3，总学分：0
  int n = 3;
  int sum = 0;

  while(n > 0)
  {
    string name;
    cin>>name;
    map<string, int>::iterator iter = courses.find(name);
    if(iter == courses.end())
    {
      cout<<name<<" is not available"<<endl;
    }
    else
    {
      sum += iter->second;
      courses.erase(iter);
      n--;
    }
  }
  cout<<"Total credit: "<<sum<<endl;
  return 0;
}

