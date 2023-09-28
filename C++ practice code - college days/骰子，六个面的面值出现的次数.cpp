#include<iostream>
#include<cstdlib>
using namespace std;
int rollDice()
{
	int die=1+rand()%6;
	return die;
} 
int main ()
{
	int i,a[1000],q=0,w=0,e=0,r=0,t=0,y=0;
	unsigned int seed;
	cin>>seed;
	srand(seed);
	for(i=0;i<1000;i++) 
	{
		a[i]=rollDice();
	}
	for(i=0;i<1000;i++)
	{
		switch(a[i])
		{
		    case 1:q++;break;
			case 2:w++;break;
			case 3:e++;break;
			case 4:r++;break;
			case 5:t++;break;
			case 6:y++;break;
		}
	}
	cout<<q<<endl;
	cout<<w<<endl;
	cout<<e<<endl;
	cout<<r<<endl;
	cout<<t<<endl;
	cout<<y<<endl;
	return 0;	
}