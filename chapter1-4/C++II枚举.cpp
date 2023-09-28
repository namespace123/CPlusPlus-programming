#include <bits/stdc++.h>
using namespace std;

int main()
{
  enum color {WHITE, BLACK=100, RED, BLUE, GREEN=300};
  cout<<WHITE<<endl;
  cout<<RED<<endl;
  if(color(102) == BLUE)
  {
    cout<<"yes"<<endl;
  }
  if(102 == BLUE)
  {
    cout<<"yes"<<endl;
  }





  enum GameResult {WIN, LOSE, TIE, CANCEL};
  // 两种enum对象声明方法
  GameResult result;
  enum GameResult omit = CANCEL;
  for(int count=0; count <= CANCEL; count++)
  {
    // 将数值转换成对应枚举值
    //( 此处也可不转换，因为数字和枚举值可以直接比较)
    result = GameResult(count);
    if(result == omit)
    {
      cout<<"The game was canceled"<<endl;
    }
    else
    {
      cout<<"The game was tied";
      if(result == WIN)
      {
        cout<<" and we won!";
      }
      if(result == LOSE)
      {
        cout<<" and we lost!";
      }
      cout<<endl;
    }
  }
  
  
  
  // 不能把整型变量直接 赋值给枚举值，但是可以将枚举值赋值给整型变量
  enum Weekday {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
  Weekday d = THURSDAY;
  int i = d;
  cout<<i<<" "<< d<<endl;
  d = (Weekday) 6;
  cout<<d<<endl;

  return 0;
}

