#include <bits/stdc++.h>
using namespace std;
class B
{
    int i;
  public:
    B(int i):i(i)
    {
    }
    void play() const
    {
      cout<<"i = "<<i<<endl;
    }
};
class C: public B
{
    int j;
  public:
    C(int i, int j):B(i), j(j)
    {

    }
    void play() const
    {
      B::play();
      cout<<"j = "<<j<<endl;
    }
};

int main()
{
  C c(3, 4);
  c.play();
  return 0;
}

