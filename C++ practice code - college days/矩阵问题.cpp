#include<iostream>
using namespace std;
	
int main()
{
	int n;
	while(cin>>n)
	{
		int i,j,k,s1[10][10]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>s1[i][j];
		}
	}
	cin>>k;
	int s2[10][10]={0},s3[10][10]={0},s4[10][10]={0},s5[10][10]={0};
	for(i=0;i<n;i++)
	    for(j=n-1;j>=0;j--)
	        s2[i][n-j-1]=s1[j][i];
	for(i=0;i<n;i++)
	    for(j=n-1;j>=0;j--)
	        s3[i][n-j-1]=s2[j][i];
	for(i=0;i<n;i++)
	    for(j=n-1;j>=0;j--)
	        s4[i][n-j-1]=s3[j][i];
	if((k+1)%4==0)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				s5[i][j]=(k+1)/4*(s1[i][j]+s2[i][j]+s3[i][j]+s4[i][j]);
			}
		}
	}
	else if((k+1)%4==1)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				s5[i][j]=(k+1)/4*(s1[i][j]+s2[i][j]+s3[i][j]+s4[i][j])+s1[i][j];
			}
		}
	}
	else if((k+1)%4==2)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				s5[i][j]=(k+1)/4*(s1[i][j]+s2[i][j]+s3[i][j]+s4[i][j])+s1[i][j]+s2[i][j];
			}
		}
	}			
	else if((k+1)%4==3)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				s5[i][j]=(k+1)/4*(s1[i][j]+s2[i][j]+s3[i][j]+s4[i][j])+s1[i][j]+s2[i][j]+s3[i][j];
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
			cout<<s5[i][j]<<ends;
		cout<<s5[i][n-1]<<endl;
	}
    for(j=0;j<n-1;j++)
			cout<<s5[n-1][j]<<ends;
		cout<<s5[n-1][n-1]<<endl;

}
	return 0;
}





	
