#include <bits/stdc++.h>
using namespace std;
#include "people.h"

// 学生
class Student: virtual public People
{
    char classNO[7]; // 班号
  public:
    Student(char *id, char *name, char *sex, Birth birth, char *number, char *classNO):birth(birth)
    {
      cout<<"调用了 Student 类的构造函数"<<endl;
      People(id, name, sex, birth, number);
      strcpy(this->classNO, classNO);
    }
    Student(const Student &s)
    {
      cout<<"调用了 Student 类的拷贝构造函数"<<endl;
      People(s);
      strcpy(this->classNO, s.classNO);
    }
    ~Student()
    {
      cout<<"调用了 Student 类的析构函数"<<endl;
    }
    setClassNO(char *classNO)
    {
      strcpy(this->classNO, classNO);
    }
    char* getClassNO() const
    {
      return classNO;
    }
    string show()
    {
      return People::show() + ", 班号：" + classNO;
    }
};

// 老师
class Teacher: virtual public People
{
    char principleship[11]; // 职务
    char department[21]; // 部门
  public:
    Teacher(char *id, char *name, char *sex, Birth birth, char *number, char *principleship, char *department):birth(birth)
    {
      cout<<"调用了 Teacher 类的构造函数"<<endl;
      People(id, name, sex, birth, number);
      strcpy(this->principleship, principleship);
      strcpy(this->department, department);
    }
    Teacher(const Teacher &t)
    {
      cout<<"调用了 Teacher 类的拷贝构造函数"<<endl;
      People(t);
      strcpy(this->principleship, t.principleship);
      strcpy(this->department, t.department);
    }
    ~Teacher()
    {
      cout<<"调用了 Teacher 类的析构函数"<<endl;
    }
    setPrincipleship(char *principleship)
    {
      strcpy(this->principleship, principleship);
    }
    char* getPrincipleship() const
    {
      return principleship;
    }
    setDepartment(char *department)
    {
      strcpy(this->department, department);
    }
    char* getDepartment() const
    {
      return department;
    }
    string show()
    {
      return People::show() + ", 职务：" + principleship + "部门：" + department;
    }
};

// 毕业生
class Graduate: virtual public Student
{
    char subject[21]; // 专业
    Teacher adviser; // 导师
  public:
    Graduate(char *id, char *name, char *sex, Birth birth, char *number, char *classNO, char *subject, Teacher adviser):birth(birth), adviser(adviser)
    {
      cout<<"调用了 Graduate 类的构造函数"<<endl;
      Student(id, name, sex, birth, number, classNO);
      strcpy(this->subject, subject);
    }
    Graduate(const Graduate &s):adviser(s.adviser)
    {
      cout<<"调用了 Graduate 类的拷贝构造函数"<<endl;
      Student(s);
      strcpy(this->subject, s.subject);
    }
    ~Graduate()
    {
      cout<<"调用了 Graduate 类的析构函数"<<endl;
    }
    setSubject(char *subject)
    {
      strcpy(this->subject, subject);
    }
    setAdviser(Teacher adviser)
    {
      adviser = adviser;
    }
    Teacher getAdviser() const
    {
      return adviser;
    }
    string show()
    {
      return Student::show() + ", 专业：" + subject + "导师：" + adviser.getName();
    }
};

// 助教
class TA: virtual public Graduate, virtual public Teacher
{
public:
	
	Teacher(char *id, char *name, char *sex, Birth birth, char *number, char *principleship, char *department)
	TA(char *id, char *name, char *sex, Birth birth, char *number, char *classNO, char *subject, 
			Teacher adviser, char *principleship, char *department):birth(birth), adviser(adviser)
    {
      cout<<"调用了 TA 类的构造函数"<<endl;
      Graduate(id, name, sex, birth, number, classNO, subject, adviser);
      Teacher(char *id, char *name, char *sex, Birth birth, char *number, char *principleship, char *department)
    }
    TA(const TA &s):adviser(s.adviser)
    {
      cout<<"调用了 TA 类的拷贝构造函数"<<endl;
      Student(s);
      strcpy(this->subject, s.subject);
    }
    ~TA()
    {
      cout<<"调用了 TA 类的析构函数"<<endl;
    }

};

