#include<iostream>
using namespace std;
int main()
{	
	int i,n,a[1000],j,t,k;
	cin>>n>>k;
	for(i=0;i<n;i++)
	   cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<=k-2;i++)
        cout<<a[i]<<" ";
    cout<<a[k-1]<<endl;
	return 0;
}
