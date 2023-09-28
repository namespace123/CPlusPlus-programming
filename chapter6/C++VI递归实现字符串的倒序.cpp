#include <bits/stdc++.h>
using namespace std;

string reverse(string & str)
{
  if(str.length() > 1)
  {
    string sub = str.substr(1, str.length() - 2);
    return str[str.length() - 1] + reverse(sub) + str[0]; 
  }
  else
  {
    return str;
  }

}

int main()
{
  string str = "asdfghjkl asdfgh";
  cout<<reverse(str)<<endl;
  return 0;
}

