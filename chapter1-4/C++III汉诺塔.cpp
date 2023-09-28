#include <bits/stdc++.h>
using namespace std;

void move(char a, char b)
{
  cout<<a<<" --> "<<b<<endl;
}

// ��n�����Ӵ�aת�Ƶ�c���м����ͨ��b��Ϊý��
void hanoi(int n, char a, char b, char c)
{
  if(n == 0)
  {
    return;
  }
  else if(n == 1)
  {
    move(a, c);
  }
  else
  {
    hanoi(n-1, a, c, b);
    move(a, c);
    hanoi(n-1, b, a, c);
  }
}
int main()
{
  int n;
  cout<<"please input the amount of plates: ";
  cin>>n;
  char a = 'A';
  char b = 'B';
  char c = 'C';
  hanoi(n, a, b, c);
  return 0;
}

