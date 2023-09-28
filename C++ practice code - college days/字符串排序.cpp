#include<iostream>
using namespace std;
int main()
{
	char *a[5];
	char *ch=new char[10];
	int i,j;
	for(i=0;i<5;i++)
	{
		a[i]=new char[10];
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		    if(strcmp(a[j],a[j+1])>0)
		    {
    			ch=a[j];
    			a[j]=a[j+1];
    			a[j+1]=ch;
    		}
	} 
	for(i=0;i<5;i++)
	    cout<<a[i]<<endl;  
    return 0;
}
	