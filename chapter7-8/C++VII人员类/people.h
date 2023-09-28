#ifndef _PEOPLE_H_
#define _PEOPLE_H_
#include <bits/stdc++.h>
#include "birth.h"
using namespace std;

class People
{
    char id[16]; // 身份证号
    char name[11]; // 姓名
    char sex[3]; // 性别
    Birth birth; // 生日
    char number[17]; // 编号
  public:
    People(char *id, char *name, char *sex, Birth birth, char *number):birth(birth)
    {
      cout<<"调用了 people 类的构造函数"<<endl;
      strcpy(this->id, id);
      strcpy(this->name, name);
      strcpy(this->sex, sex);
      strcpy(this->number, number);
    }
    People(const People &p)
    {
      cout<<"调用了 people 类的拷贝构造函数"<<endl;
      strcpy(this->id, p.id);
      strcpy(this->name, p.name);
      strcpy(this->sex, p.sex);
      strcpy(this->number, p.number);
      this->birth = p.birth;
    }
    ~People()
    {
      cout<<"调用了 people 类的析构函数"<<endl;
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

    // 显示
    string show()
    {
//      return "学生信息如下：" + "身份证号: " + id + ", 姓名：" + name + ", 性别：" + sex + ", 生日：" +
//             birth.getYear() + "年" + birth.getMonth() + "月" + birth.getDay() + "日, 编号：" + number;
      cout<<"学生信息如下："<<endl<<"身份证号: "<<id<<", 姓名："<<name<<", 性别："<<sex<<", 生日："<<
          birth.getYear()<<"年"<<birth.getMonth()<<"月"<<birth.getDay()<<"日, 编号："<<number<<endl;
    }

};

#endif
