#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;
  public:
    A(int a):a(a)
    {
    }
    void show();
};

void A::show()
{
  std::cout<<"a = "<<a<<std::endl;
}

int main()
{
  A a(2);
  a.show();
  return 0;
}

