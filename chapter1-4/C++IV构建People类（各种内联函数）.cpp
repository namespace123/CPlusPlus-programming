#include <bits/stdc++.h>
using namespace std;

class Birth
{
    int year;
    int month;
    int day;

  public:
    Birth():year(0), month(0), day(0) {}
    Birth(int year, int month, int day):year(year),month(month),day(day) {}
    Birth(const Birth &b):year(b.year),month(b.month),day(b.day) {}
    ~Birth() {}
    int getYear()
    {
      return year;
    }
    int getMonth()
    {
      return month;
    }
    int getDay()
    {
      return day;
    }
    void setYear(int year)
    {
      year = year;
    }
    void setMonth(int month)
    {
      month = month;
    }
    void setDay(int day)
    {
      day = day;
    }
};

enum Sex {MALE, FEMALE};

class People
{
    int number;
    Sex sex;
    Birth birth;
    string id;
  public:
    People():number(00000),sex(MALE), id("")
    {
      Birth birth(0000,00,00);
      this->birth = birth;
    }
    People(int number, Sex sex, Birth birth, string id);
    People(const People &p);
    ~People() {}
    int getNumber()
    {
      return number;
    }
    Sex getSex()
    {
      return sex;
    }
    Birth getBirth()
    {
      return birth;
    }
    string getId()
    {
      return id;
    }
    void setNumber(int number)
    {
      number = number;
    }
    void setSex(Sex sex)
    {
      sex = sex;
    }
    // ��Ϊ��ʽ��������
    void setBirth(Birth birth)
    {
      birth = birth;
    }
    // ��Ϊ��ʽ��������
    inline void setId(string id);

    // ��ʾ
    void show()
    {
      cout<<"ѧ����Ϣ���£�"<<endl<<"ѧ��: "<<number<<", �Ա�"<<(sex == FEMALE ? "Ů" : "��")<<", ���գ�"<<
          birth.getYear()<<"��"<<birth.getMonth()<<"��"<<birth.getDay()<<"��, ���֤�ţ�"<<id<<endl;
    }

};
// ��������inline������ʾ��������
void People::setId(string id)
{
  id = id;
}
// ���岻�������棬�������Ͷ��嶼û��inline������������
People::People(int number, Sex sex, Birth birth, string id):number(number),sex(sex),birth(birth), id(id) {}
// ���崦��inline���ǡ�׷�ӡ���������
inline People::People(const People &p):number(p.number),sex(p.sex),birth(p.birth), id(p.id) {}

int main()
{
  Birth birth(1999, 11, 9);
  People p(20198038, FEMALE, birth, "344921199911092386");
  p.show();
  return 0;
}

