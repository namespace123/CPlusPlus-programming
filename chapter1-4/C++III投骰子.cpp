#include <iostream>
using namespace std;

int rollDice();

enum GameStatus
{
  WIN,
  LOSE,
  PLAYING
};

int main()
{
  //  input a seed
  cout<<"please input a seed: ";
  unsigned int seed;
  cin>>seed;
  srand(seed);  // 产生一个伪随机数序列
  int sum = rollDice();

  GameStatus status;

  // 判分
  switch(sum)
  {
    case 7:
    case 11:
      status = WIN;
      break;
    case 2:
    case 3:
    case 12:

      break;
    default:
      status = PLAYING;
      int point = sum;
      cout<<"the point is "<<point<<endl;
      while(status == PLAYING)
      {
        sum = rollDice();
        if(sum == point)
        {
          status = WIN;
        }
        else if(sum == 7)
        {
          status = LOSE;
        }
      }
  }

  switch(status)
  {
    case WIN:
      cout<<"you win!"<<endl;
      break;
    case LOSE:
      cout<<"you lose!"<<endl;
  }
  return 0;
}

// 投骰子，输出和数
int rollDice()
{
  int dice1 = 1 + rand() % 6;
  int dice2 = 2 + rand() % 6;
  int sum = dice1 + dice2;
  cout<<"played rolled " << dice1 << " + " << dice2 << " = " << sum <<endl;
  return sum;
}



