#include<iostream>
using namespace std; 
int main()
{
	int n,i,j,a[100][100],b[100][100];
	cin>>n;
	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	        cin>>a[i][j];
    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	        b[i][j]=a[j][i];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<b[i][n-1]<<endl;
	}
	for(j=0;j<n-1;j++)
		{
			cout<<b[n-1][j]<<" ";
		}
		cout<<b[n-1][n-1]<<endl;
	
	return 0;
}
