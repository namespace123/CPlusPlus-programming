#include <bits/stdc++.h>
using namespace std;

// ��ʾ�ɼ���������
//union Mark
//{
//  char grade;
//  bool pass;
//  int percent;
//};

// ����������
// union �ڵ����Թ���ͬһ���洢�ռ䣬�����i��ֵ֮���ָ�f���ƣ���ôi��ֵ����Ч��
//union
//{
//  int i;
//  float f;
//};

class ExamInfo
{
    string name;
    enum {GRADE, PASS, PERCENTAGE} mode;
    // ��ʾ�ɼ���������
    // ������Ա��ͬʱ�����ã������������壬�ɱ������࣬Ҳ�ɱ������ 
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
          cout<<(pass?"ͨ��":"δͨ��");
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

