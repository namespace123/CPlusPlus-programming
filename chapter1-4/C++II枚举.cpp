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
  // ����enum������������
  GameResult result;
  enum GameResult omit = CANCEL;
  for(int count=0; count <= CANCEL; count++)
  {
    // ����ֵת���ɶ�Ӧö��ֵ
    //( �˴�Ҳ�ɲ�ת������Ϊ���ֺ�ö��ֵ����ֱ�ӱȽ�)
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
  
  
  
  // ���ܰ����ͱ���ֱ�� ��ֵ��ö��ֵ�����ǿ��Խ�ö��ֵ��ֵ�����ͱ���
  enum Weekday {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
  Weekday d = THURSDAY;
  int i = d;
  cout<<i<<" "<< d<<endl;
  d = (Weekday) 6;
  cout<<d<<endl;

  return 0;
}

