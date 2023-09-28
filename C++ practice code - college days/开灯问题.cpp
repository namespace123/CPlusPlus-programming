#include<iostream>
using namespace std;
int main()
{
	int n,k;
    while(cin>>n>>k)
    {
    	int i,j,a[1001]={0},m=0;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j%i==0)
			{
				if(a[j]==0) a[j]=1;
	            else a[j]=0;
			}
		}
	}
	for(i=1;i<=n;i++)
	    if(a[i]) cout<<i<<endl;	
	}
	return 0;
}
