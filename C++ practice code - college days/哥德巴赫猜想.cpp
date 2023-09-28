#include <iostream>
#include<cmath>
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
		int i;
		for(i=2;i<n-1;i++)
		{
			if(zhishu(i)&&zhishu(n-i))
		        break;
		}
		cout<<i<<"+"<<n-i<<endl;
	}
	return 0; 
}
