#include <iostream>
using namespace std;

int main()
{
  cout<<sizeof(int)<<" "<<sizeof(short)<<" "<<sizeof(long)<<" "<<sizeof(char)<<" "<<sizeof(float)<<" "<<sizeof(double)<<endl;
  cout<<sizeof(long long)<<" "<<sizeof(long int)<<endl;
  
  

  for(int i = 32; i < 128; i++)
  {
  	// 两种数字转字符的方法
    cout<<(char) i<<char (i);
  }
  cout<<endl;
  
  

  char flag = 'a';
  cout<<toupper(flag)<<" "<<tolower(flag)<<endl;

//cout<<hex;
//
//cout<<1024<<" "<<1024<<endl;
//cout<<1024<<endl;
  return 0;
}

