#include <bits/stdc++.h>
using namespace std;

int main()
{
  int f[20] = {1,1};
  for(int i=2; i < 20; i++)
  {
    f[i] = f[i-1] + f[i-2];
  }
  for(int i = 0; i < 20; i++)
  {
    cout<<setw(5)<<f[i];
  }
  cout<<endl;

  for(int i = 0; i < 20; i++)
  {
    if(i % 5 == 0 && i != 0)
    {
      cout<<endl;
    }
    cout.width(12);
    cout<<f[i];
  }

  return 0;
}

