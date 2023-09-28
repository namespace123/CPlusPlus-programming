#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	    int n;
	    while(cin>>n){
		int i,j;
		char a[1000][1000],t[1000];
		for(i=0;i<n;i++)
		    cin>>a[i];
        for(i=0;i<n-1;i++)
            for(j=0;j<n-i-1;j++)
            if(strcmp(a[j],a[j+1])<0)
            {
            	strcpy(t,a[j]);
            	strcpy(a[j],"0");
            	strcpy(a[j],a[j+1]);
            	strcpy(a[j+1],"0");
            	strcpy(a[j+1],t);
            }
        for(i=0;i<n;i++)
            cout<<a[i];
        cout<<endl;
    }
     	return 0;	 
}
