#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num[]  = {1, 2, 4, 2, 6, 4};
  list<int> s(num, num+6);
  auto iter = back_inserter(s);
  *(iter++) = 5; // °Ñ5²åÈësÄ©Î²
  copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
  return 0;
}

