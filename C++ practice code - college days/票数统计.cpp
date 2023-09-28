#include<iostream>
using namespace std;
int main()
{
	int a[1001]={0},i,x;
	cin>>x;
	while(x!=-1)
	{
		a[x]++;
		cin>>x;
	}
	for(i=1;i<=1000;i++)
	  if(a[i]>0)
	    cout<<i<<" "<<a[i]<<endl;
	return 0;
}	
	
	
