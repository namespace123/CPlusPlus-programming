#include<iostream>  
using namespace std;  
int main()  
{  
    int i,j,n;  
    cin>>n;
    int count=0;  
    int a[10][10];  
    for(i=0;i<n/2;i++)  
    {  
        for(j=i;j<n-i-1;j++)  
            a[i][j]=++count;  
        for(j=i;j<n-i-1;j++)  
            a[j][n-i-1]=++count;  
        for(j=i;j<n-i-1;j++)  
            a[n-i-1][n-1-j]=++count;  
        for(j=i;j<n-i-1;j++)  
            a[n-1-j][i]=++count;  
    }  
    if(n%2!=0)  
        a[n/2][n/2]=++count;  
    for(i=0;i<n-1;i++)  
    {  
        for(j=0;j<n;j++)  
            cout<<a[i][j]<<ends;  
        cout<<endl;  
    }  
    for(j=0;j<n;j++)  
    {
    	cout<<a[n-1][j]<<ends;
    }
    return 0;  
}  
