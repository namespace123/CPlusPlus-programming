#include<iostream>
using namespace std;
int re(int n)
{
	if(n==1) return 1;
	else if(n==2) return 1;
	else return re(n-1)+re(n-2); 
} 
int main()
{
	int n;
	while(cin>>n)
	{
	    cout<<re(n)<<endl;
	}
	return 0;
}
