#ifndef _PEOPLE_H_
#define _PEOPLE_H_
#include <bits/stdc++.h>
#include "birth.h"
using namespace std;

class People
{
    char id[16]; // ���֤��
    char name[11]; // ����
    char sex[3]; // �Ա�
    Birth birth; // ����
    char number[17]; // ���
  public:
    People(char *id, char *name, char *sex, Birth birth, char *number):birth(birth)
    {
      cout<<"������ people ��Ĺ��캯��"<<endl;
      strcpy(this->id, id);
      strcpy(this->name, name);
      strcpy(this->sex, sex);
      strcpy(this->number, number);
    }
    People(const People &p)
    {
      cout<<"������ people ��Ŀ������캯��"<<endl;
      strcpy(this->id, p.id);
      strcpy(this->name, p.name);
      strcpy(this->sex, p.sex);
      strcpy(this->number, p.number);
      this->birth = p.birth;
    }
    ~People()
    {
      cout<<"������ people �����������"<<endl;
    }
    char* getId()
    {
      return id;
    }
    char*getName() const
    {
      return name;
    }
    char* getSex() const
    {
      return sex;
    }
    Birth getBirth() const
    {
      return birth;
    }
    char* getNumber() const
    {
      return number;
    }

    void setId(char *id)
    {
      strcpy(this->id, id);
    }
    void setName(char *name)
    {
      strcpy(this->name, name);
    }
    void setSex(char *sex)
    {
      strcpy(this->sex, sex);
    }
    void setBirth(Birth birth)
    {
      this->birth = birth;
    }
    void setNumber(char *number)
    {
      strcpy(this->number, number);
    }

    // ��ʾ
    string show()
    {
//      return "ѧ����Ϣ���£�" + "���֤��: " + id + ", ������" + name + ", �Ա�" + sex + ", ���գ�" +
//             birth.getYear() + "��" + birth.getMonth() + "��" + birth.getDay() + "��, ��ţ�" + number;
      cout<<"ѧ����Ϣ���£�"<<endl<<"���֤��: "<<id<<", ������"<<name<<", �Ա�"<<sex<<", ���գ�"<<
          birth.getYear()<<"��"<<birth.getMonth()<<"��"<<birth.getDay()<<"��, ��ţ�"<<number<<endl;
    }

};

#endif
