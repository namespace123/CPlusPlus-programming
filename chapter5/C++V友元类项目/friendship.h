#include <bits/stdc++.h>
using namespace std;

class X;

class Y
{
  public:
    void g(X* x);
};

class Z
{
  public:
    void f(X* x);
};

void h(X* x);

class X
{
    int i;

  public:
    X():i(0)
    {
    }
    friend class Z;
    friend void Y::g(X* x);
    friend void h(X* x);
};
void Y::g(X* x)
{
  x->i += 1;
  cout<<"Y::g: i = "<<(x->i)<<endl;
}
void Z::f(X* x)
{
  x->i += 5;
  cout<<"Z::f: i = "<<(x->i)<<endl;
}
void h(X* x)
{
  x->i += 10;
  cout<<"h: i = "<<(x->i)<<endl;
}
