#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i;
	cin>>n>>i;
	if(n==0) return 0;
	int s=0,j=0;
	while(n!=0)
	{	
	    cout<<pow(i,j)<<endl;
	    cout<<n%10<<endl;
		s=s+(n%10)*pow(i,j++);
		cout<<s<<endl<<endl;
		
		n=n/10;
    }
    cout<<s<<endl;
	return 0;
}
