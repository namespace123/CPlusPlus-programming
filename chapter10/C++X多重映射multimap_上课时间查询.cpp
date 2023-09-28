#include <bits/stdc++.h>
using namespace std;

int main()
{
  multimap<string, string> courses;
  typedef multimap<string, string>::iterator CourseIter;

  courses.insert(make_pair("C++", "2-6"));
  courses.insert(make_pair("COMPILER", "3-1"));
  courses.insert(make_pair("OS", "1-2"));
  courses.insert(make_pair("OS", "4-1"));
  courses.insert(make_pair("COMPILER", "5-2"));
  courses.insert(make_pair("OS", "5-5"));

  string name;
  int count;
  do
  {
    cin>>name;
    // 找到这门课的次数
    count = courses.count(name);
    if(count == 0)
    {
      cout<<"cannot find this course!"<<endl;
    }
  }
  while(count == 0);
  // 输出每周上课次数，和上课时间
  cout<<count<<"lesson(s) per week: ";
  // equal_range:找到该课程所存在的范围
  pair<CourseIter, CourseIter> range = courses.equal_range(name);
  for(CourseIter iter = range.first; iter != range.second; iter++)
  {
    cout<<iter->second<<" ";
  }
  cout<<endl;


  return 0;
}

