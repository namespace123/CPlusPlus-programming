#include<iostream>
#define M 3
#define N 3 
using namespace std;
int main()
{
	//求同行与同列中皆为最大数的数 
	int a[M][N]={23,435,765,78,213,657,643,765,881};
	int i,j,k=0,max,s;
	for(i=0;i<M;i++)
	{
		max=a[i][0];
		for(j=1;j<N;j++)
		{
			if(max<a[i][j]) {max=a[i][j];s=j;}
		}
	    for(k=0;k<N;k++)
	       if(a[k][s]>max) break;
        if(k>=N) cout<<i<<" "<<max<<endl;
        else cout<<i<<" 无"<<endl;
	}
    return 0;
} 
