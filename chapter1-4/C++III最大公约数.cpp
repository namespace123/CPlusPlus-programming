#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, r;
  cout<<"please int two numbers: "<<endl;
  cin>>a>>b;
  int c = a * b;
  do
  {
    r = a % b;
    a = b;
    b = r;
  }
  while(r != 0);
  cout<<"���Լ����"<<a<<endl;
  cout<<"��С��������"<<(c / a)<<endl;
  return 0;
}

