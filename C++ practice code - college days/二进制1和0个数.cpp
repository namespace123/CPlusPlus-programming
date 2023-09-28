#include <stdio.h>
#define N 2
int main()
{	
	int b,n;
	while(scanf("%d",&n)!=EOF)
	{
		int i=0,j=0;
		b=1;
	    while(b*N<=n) 	b*=N;
        do{
        	if(n/b==0) i++;
        	else j++;
	        n-=n/b*b;
	        b=b/N;
	    }while(b!=0);
	    printf("%d\n%d\n",j,i);
	}
	return 0;
}
