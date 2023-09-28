#include <iostream>
#include "point.h"
using namespace std;

void Point::move(int newX, int newY)
{
  x = newX;
  y = newY;
  cout<<"ÒÆ¶¯µ½£º("<<x<<","<<y<<")"<<endl;
}

int main()
{
  Point a[2];
  for(int i = 0; i < 2; i++)
  {
    a[i].move(i + 10, i + 20);
  }
  return 0;
}

