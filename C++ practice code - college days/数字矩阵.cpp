#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
 int i,j,n,number=1,a[10][10];
 cin>>n;
 for(i=0;i<=n/2;i++)     
 {
  for(j=i;j<n-i;j++)   
   a[i][j]=number++;
  for(j=i+1;j<n-i;j++) 
   a[j][n-i-1]=number++;
  for(j=n-i-2;j>i;j--)  
   a[n-i-1][j]=number++;
  for(j=n-i-1;j>i;j--)  
   a[j][i]=number++;
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
      if(a[i][j]>=n&&a[i][j]<=n*2-1)
          cout<<a[i][j];
      else
          cout<<a[i][j]<<" ";
   cout<<endl;
 }
 return 0;
}       

