#include <bits/stdc++.h>
using namespace std;

enum class Side
{
  Right, Left
};
enum class Thing
{
  Wrong, Right
};

int main()
{
  // 在默认情况下，enum值默认是int型，但由于类不同，所以s和w依旧是无法相互比较的
  Side s = Side::Right;
  Thing w = Thing::Wrong;
  return 0;
}

