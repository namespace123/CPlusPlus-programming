#include<iostream>
using namespace std;
int main()
{
	int l,n;
	while(cin>>l>>n)
	{
		int s[10001]={0},i,j=0;
	while(n--)
	{
		int a,b; 
		cin>>a>>b;
		for(i=a;i<=b;i++)
		    s[i]=1;
	}
	for(i=0;i<=l;i++)
	{
		if(s[i]==0) j++;
	}
	cout<<j<<endl;
    }
	return 0;
}
