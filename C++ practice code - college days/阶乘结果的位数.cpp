#include<iostream>
#include<stdio.h>
using namespace std;
int fac(int n)
{
	int f;
	if(n==0) f=1;
	else f=n*fac(n-1);
	return f;
}			
int main()
{
	int n;
	while(cin>>n)
	{
		int m=fac(n),i=0;
		for(;m/10!=0;i++) m/=10;
		cout<<i+1<<endl;
	} 
	return 0;
}
