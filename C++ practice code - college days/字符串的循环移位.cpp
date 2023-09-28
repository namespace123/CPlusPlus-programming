#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
	int n,i;
    char a[1000],b[1000];
    cin>>n>>a;
    strcpy(b,a);
    int t=strlen(a);
    for(i=n;i<t;i++)
    {
    	a[i-n]=a[i];
    }
    for(i=t-n;i<t;i++)
    {
    	a[i]=b[i-t+n];
    }
    cout<<a<<endl;
	
	return 0;
}
