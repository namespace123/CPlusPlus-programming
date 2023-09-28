#include<iostream>
#include<cmath>
using namespace std;
int zi(int n)
{
	if(n==1) return 2;
	else if(n==2) return 3;
	else return zi(n-1)+zi(n-2);
}
int mu(int n)
{
	if(n==1) return 1;
	else if(n==2) return 2;
	else return mu(n-1)+mu(n-2);
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n%2==0) cout<<"-"<<zi(n)<<"/"<<mu(n)<<endl;
		else cout<<zi(n)<<"/"<<mu(n)<<endl;
	}
	return 0;
}
