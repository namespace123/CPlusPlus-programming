#include <bits/stdc++.h>
using namespace std;
#include "people.h"

// ѧ��
class Student: virtual public People
{
    char classNO[7]; // ���
  public:
    Student(char *id, char *name, char *sex, Birth birth, char *number, char *classNO):birth(birth)
    {
      cout<<"������ Student ��Ĺ��캯��"<<endl;
      People(id, name, sex, birth, number);
      strcpy(this->classNO, classNO);
    }
    Student(const Student &s)
    {
      cout<<"������ Student ��Ŀ������캯��"<<endl;
      People(s);
      strcpy(this->classNO, s.classNO);
    }
    ~Student()
    {
      cout<<"������ Student �����������"<<endl;
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
      return People::show() + ", ��ţ�" + classNO;
    }
};

// ��ʦ
class Teacher: virtual public People
{
    char principleship[11]; // ְ��
    char department[21]; // ����
  public:
    Teacher(char *id, char *name, char *sex, Birth birth, char *number, char *principleship, char *department):birth(birth)
    {
      cout<<"������ Teacher ��Ĺ��캯��"<<endl;
      People(id, name, sex, birth, number);
      strcpy(this->principleship, principleship);
      strcpy(this->department, department);
    }
    Teacher(const Teacher &t)
    {
      cout<<"������ Teacher ��Ŀ������캯��"<<endl;
      People(t);
      strcpy(this->principleship, t.principleship);
      strcpy(this->department, t.department);
    }
    ~Teacher()
    {
      cout<<"������ Teacher �����������"<<endl;
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
      return People::show() + ", ְ��" + principleship + "���ţ�" + department;
    }
};

// ��ҵ��
class Graduate: virtual public Student
{
    char subject[21]; // רҵ
    Teacher adviser; // ��ʦ
  public:
    Graduate(char *id, char *name, char *sex, Birth birth, char *number, char *classNO, char *subject, Teacher adviser):birth(birth), adviser(adviser)
    {
      cout<<"������ Graduate ��Ĺ��캯��"<<endl;
      Student(id, name, sex, birth, number, classNO);
      strcpy(this->subject, subject);
    }
    Graduate(const Graduate &s):adviser(s.adviser)
    {
      cout<<"������ Graduate ��Ŀ������캯��"<<endl;
      Student(s);
      strcpy(this->subject, s.subject);
    }
    ~Graduate()
    {
      cout<<"������ Graduate �����������"<<endl;
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
      return Student::show() + ", רҵ��" + subject + "��ʦ��" + adviser.getName();
    }
};

// ����
class TA: virtual public Graduate, virtual public Teacher
{
public:
	
	Teacher(char *id, char *name, char *sex, Birth birth, char *number, char *principleship, char *department)
	TA(char *id, char *name, char *sex, Birth birth, char *number, char *classNO, char *subject, 
			Teacher adviser, char *principleship, char *department):birth(birth), adviser(adviser)
    {
      cout<<"������ TA ��Ĺ��캯��"<<endl;
      Graduate(id, name, sex, birth, number, classNO, subject, adviser);
      Teacher(char *id, char *name, char *sex, Birth birth, char *number, char *principleship, char *department)
    }
    TA(const TA &s):adviser(s.adviser)
    {
      cout<<"������ TA ��Ŀ������캯��"<<endl;
      Student(s);
      strcpy(this->subject, s.subject);
    }
    ~TA()
    {
      cout<<"������ TA �����������"<<endl;
    }

};

