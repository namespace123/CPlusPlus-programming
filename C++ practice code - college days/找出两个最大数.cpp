#include<iostream>
using namespace std;
int main()
{	
	int i,n,a[1000],j,t;
	cin>>n;
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
	cout<<a[0];
	for(i=1;i<n;i++)
	if(a[i]!=a[0]) {cout<<" "<<a[i]<<endl;break;}
	return 0;
}
