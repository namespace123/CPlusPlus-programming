#include<iostream>
using namespace std;
int huiwen(int a)
{
	int t=0,m,b=a;
	while(a!=0)
	{
		m=a%10;
		t=t*10+m;
		a/=10;
	}
	if(b==t) return 1;
	else return 0;
	
}
int main ()
{
	int a,b,c,d,e,f,i,j,n,m;
	for(m=11;m<=999;m++)
	{
		if(huiwen(m))
		    if(huiwen(m*m))
		        if(huiwen(m*m*m))
		            cout<<m<<" ";
	}
	return 0;
} 
