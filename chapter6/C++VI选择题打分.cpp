#include <bits/stdc++.h>
using namespace std;

int main()
{
  const char key[] = {'a', 'c', 'b', 'a', 'd'};
  const int num = 5;
  char c;
  int ques = 0, numCorrect = 0;
  cout<<"Enter the "<<num<<" quention tests: "<<endl;
  while(cin.get(c))
  {
    if(c != '\n')
    {
      if(c == key[ques])
      {
        numCorrect++;
        cout<<" ";
      }
      else
      {
        cout<<"*";
      }
      ques++;
    }
    else
    {
      cout<<" Score: "<<static_cast<float>(numCorrect) * 100 / num<<'%'<<endl;
      ques = 0;
      numCorrect = 0;
    }
  }
  return 0;
}

