#include <bits/stdc++.h>
using namespace std;
#include "rectangle.h"

int main()
{
  Rectangle rect;
  rect.initRectangle(2, 3, 20, 10);
  rect.move2(3, 2);
  cout<<rect.getX2()<<", "<<rect.getY2()<<", "<<rect.getW()<<", "<<rect.getH()<<endl;
  return 0;
}

