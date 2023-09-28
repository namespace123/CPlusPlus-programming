#include <iostream>
using namespace std;
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
	while(cin>>n)
	{
		if(n<4) {cout<<"No"<<endl;break;}
		int i;
		for(i=2;i<n;i++)
		{
			if(n%i==0&&zhishu(i)&&zhishu(n/i))
				break;
		}
		if(i>=n) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
	return 0;
}







