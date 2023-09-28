#include<iostream>
#include<cstdlib>
using namespace std;
int rollDice()
{
	int die1=1+rand()%6;
	int die2=1+rand()%6;
	int sum=die1+die2;
	cout<<die1<<"+"<<die2<<"="<<sum<<endl;
	return sum;
}
enum GameStatus{WIN,LOSE,PLAYING}; 
int main ()
{
	int sum,Mypoint;
	GameStatus status;
	unsigned int seed;
	cin>>seed;
	srand(seed);
	sum=rollDice();
	switch(sum)
	{
		case 7:
		case 11:status=WIN;break;
		case 2:
		case 3:
		case 12:status=LOSE;break;
		default:status=PLAYING;Mypoint=sum;cout<<"point is:"<<sum<<endl;break;
	}
	while (status==PLAYING)
	{
		sum=rollDice();
		if(sum==Mypoint)
		    status=WIN;
        else if(sum==7)
            status=LOSE;       
	}
	if(status==WIN) cout<<"piayer wins"<<endl;
	else cout<<"player loses"<<endl;
	return 0;	
}