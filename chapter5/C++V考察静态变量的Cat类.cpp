#include <bits/stdc++.h>
using namespace std;

class Cat
{
    static int numOfCats;
    int age;
  public:
    Cat(int age):age(age)
    {
      numOfCats++;
    }
    virtual ~Cat()
    {
      numOfCats--;
    }
    virtual int getAge()
    {
      return age;
    }
    virtual void setAge(int age)
    {
      age = age;
    }
    static int getNumOfCats()
    {
      return numOfCats;
    }

};
int Cat::numOfCats = 0;
void telepathicFunction();
int main()
{
  const int maxCats = 5;
  Cat *catHouse[maxCats];
  int i;
  for(i = 0; i < maxCats; i ++)
  {
    catHouse[i] = new Cat(i);
    telepathicFunction();
  }
  for(i = 0; i < maxCats; i ++)
  {
    delete catHouse[i];
    telepathicFunction();
  }
  return 0;
}
void telepathicFunction()
{
  cout<<"There are "<<Cat::getNumOfCats()<<"cats alive!"<<endl;
}

