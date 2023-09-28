#include <bits/stdc++.h>
using namespace std;

// 表示成绩的联合体
//union Mark
//{
//  char grade;
//  bool pass;
//  int percent;
//};

// 无名联合体
// union 内的属性公用同一个存储空间，如果给i赋值之后又给f复制，那么i的值就无效了
//union
//{
//  int i;
//  float f;
//};

class ExamInfo
{
    string name;
    enum {GRADE, PASS, PERCENTAGE} mode;
    // 表示成绩的联合体
    // 三个成员不同时起作用，可以用联合体，可避免冗余，也可避免错误 
    union
    {
      char grade;
      bool pass;
      int percent;
    };
  public:
    ExamInfo(string name, char grade):name(name),mode(GRADE),grade(grade) {}
    ExamInfo(string name, bool pass):name(name),mode(PASS),pass(pass) {}
    ExamInfo(string name, int percent):name(name),mode(PERCENTAGE),percent(percent) {}
    void show()
    {
      cout<<name<<" : ";
      switch(mode)
      {
        case GRADE:
          cout<<grade;
          break;
        case PASS:
          cout<<(pass?"通过":"未通过");
          break;
        case PERCENTAGE:
          cout<<percent;
          break;
      }
      cout<<endl;
    }
};

int main()
{
  ExamInfo course1("English", 'B');
  ExamInfo course2("Calculus", true);
  ExamInfo course3("C++", 85);
  course1.show();
  course2.show();
  course3.show();
  return 0;
}

