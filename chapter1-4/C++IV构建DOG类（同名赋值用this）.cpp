#include <bits/stdc++.h>
using namespace std;

class DOG
{

  public:
    DOG(int a, float w);
    ~DOG()
    {
      cout<<"构析了一个DOG！"<<endl;
    }

    int getAge();
    float getWeight()
    {
      return weight;
    }

    // set 与 构造函数：形参与属性同名时，一定要加this->，不同名时，可加可不加 
    void setAge(int age)
    {
      this->age = age;
    }
    void setWeight(float weight)
    {
      this->weight = weight;
    }


  private:
    int age;
    float weight;
};

DOG::DOG(int age, float weight)
{
  this->age = age;
  this->weight = weight;
  cout<<"构造了一个DOG！"<<endl;
}

int DOG::getAge()
{
  return age;
}

int main()
{
  DOG Jack(2, 10.0);
  cout<<"Jack is a Dog who is "<<Jack.getAge()<<" years old and "<<Jack.getWeight()<<" pounds weight."<<endl;
  Jack.setAge(5);
  Jack.setWeight(20.2);
  cout<<"Jack is a Dog who is "<<Jack.getAge()<<" years old and "<<Jack.getWeight()<<" pounds weight."<<endl;
  DOG Jack2(7, 25.5);
  cout<<"Jack2 is a Dog who is "<<Jack2.getAge()<<" years old and "<<Jack2.getWeight()<<" pounds weight."<<endl;
  return 0;
}

