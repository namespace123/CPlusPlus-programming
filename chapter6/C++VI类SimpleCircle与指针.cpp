#include <bits/stdc++.h>
using namespace std;
class SimpleCircle
{
    int * radius;
  public:
    SimpleCircle():radius(new int(0))
    {
    }
    SimpleCircle(int radius): radius(new int(radius))
    {
    }
    ~SimpleCircle()
    {
    	delete radius;
    }
    SimpleCircle(const SimpleCircle &c):radius(c.radius)
    {
    }

    void setRadius(int r)
    {
      radius = new int(r);
    }
    int getRadius() const
    {
      return *radius;
    }
};
int main()
{
  SimpleCircle c1, c2(9);
  cout<<c1.getRadius()<<", "<<c2.getRadius()<<endl;
  return 0;
}

