#include <stdio.h> 
#define N 6 
int a[N][N]; 

void go(int i,int j,int dir,int start,int final); 

int main() 
{ 
int n; 
int i,j; 

for(i=0;i<N;i++) 
for(j=0;j<N;j++) 
a[i][j]=0; 

a[(N-1)/2][(N-1)/2]=1; 

go((N-1)/2,(N-1)/2,0,2,N*N); 

for(i=0;i<N;i++) 
{ 
for(j=0;j<N;j++) printf("%02d ",a[i][j]); 
printf("\n"); 
} 
getchar(); 
return 0; 
} 

void go(int i,int j,int dir,int start,int final) 
{ 
int ri,rj,gi,gj; 
if(start>final) return; 

switch(dir) 
{ 
case 0:rj=j+1;ri=i;gj=j;gi=i-1;break; 
case 1:rj=j;ri=i+1;gj=j+1;gi=i;break; 
case 2:rj=j-1;ri=i;gj=j;gi=i+1;break; 
case 3:rj=j;ri=i-1;gj=j-1;gi=i;break; 
default:break; 
} 
if(a[ri][rj]==0) 
{ 
a[ri][rj]=start; 
go(ri,rj,(dir+1)%4,start+1,final); 
} 
else 
{ 
a[gi][gj]=start; 
go(gi,gj,dir,start+1,final); 
} 
} 
