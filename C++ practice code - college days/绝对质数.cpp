#include<iostream>
#include<cmath>
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
	return t;	
}
int zhishu(int n)
{
    if(n==1) return 0;
        else
		{
			int i,t; 
            t=sqrt(n);
            for(i=2;i<=t;i++)
                if(n%i==0) break;
            if(i>t) return 1;
            else return 0;
        }
}
int main()
{
	int n;
	cin>>n;
	if(zhishu(n)&&zhishu(huiwen(n)))
	    cout<<"1"<<endl;
	else cout<<"0"<<endl;
	return 0;
}
