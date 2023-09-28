#include<iostream>
#include<cmath>
using namespace std;
int re(int n)
{
	int i,b;
	for(n=1;n<=100;n++)
	{
		b=sqrt(n);
		for(i=2;i<=b;i++)
		    if(n%i==0) break;
    if(i>n) return 1;
	else return 0; 
}
int main ()
{
	int a;
	while(cin>>a)
	{
	   if(re(a)==0) cout<<"No"<<endl;
	   else cout<<"Yes"<<endl;
    }
	return 0;
} 
