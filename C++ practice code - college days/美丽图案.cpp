#include<iostream>
using namespace std;
int main()
{
	int i,j;
    for(i=1;i<=4;i++)
    {
    	for(j=1;j<=8-2*i;j++)
    	    cout<<" ";
        for(j=1;j<=2*i-1;j++)
            cout<<"*";
        cout<<endl;
    }
    for(i=1;i<=3;i++)
    {
    	for(j=1;j<=7-2*i;j++)
    	    cout<<"*";
    	cout<<endl;
    }
    return 0;
        
} 
