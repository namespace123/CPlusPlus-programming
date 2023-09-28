#include <stdio.h>
#define N 2
int main()
{	
	int b,n,a;
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d",&n);
		b=1;
	    while(b*N<=n) 	b*=N;
        do{
	        printf("%d",n/b);
	        n-=n/b*b;
	        b=b/N;
	    }while(b!=0);
	    printf("\n");
	}
	return 0;
}
