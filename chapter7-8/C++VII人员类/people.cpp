#include "people.h"
#include "birth.h"
using namespace std;


int main()
{
  Birth birth(1999, 11, 9);
  People p("344921199911092386", "sophia", "Ů", birth, "20198038");
  p.setName("sophie");
  Birth birth2(2019, 11, 9);
  p.setBirth(birth2);
  p.show();
  return 0;
}

