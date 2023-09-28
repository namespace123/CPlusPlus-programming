#include<iostream>
using namespace std;

int move(int a,int b)
{
	if(a==1&&b==0) {a==0,b==1;}
	if(a==0&&b==1) {a==1,b==0;}
}


int hanoi(int n,int a,int b,int c)
{
	int t=0;
	if(n>0)
	{
		hanoi(n-1,a,c,b);
		move(a,b);
		hanoi(n-1,c,b,a);
		t++;
	}
	return t;
}


int main()
{
	int n=5;
	int a=5,b=0,c=0;
	cout<<hanoi(n,a,b,c)<<endl;
	
} 
