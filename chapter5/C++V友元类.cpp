#include <bits/stdc++.h>
using namespace std;

// 友元是单向的
class A
{
    int x;
    //授权友元类B
    friend class B;
  public:
    void display()
    {
      cout<<x<<endl;
    }
};

class B
{
    A a;
  public:
    void set(int i)
    {
      a.x = i;
    }
    void display()
    {
      a.display();
    }
};

int main()
{
  B b;
  b.set(2);
  b.display();
  return 0;
}

