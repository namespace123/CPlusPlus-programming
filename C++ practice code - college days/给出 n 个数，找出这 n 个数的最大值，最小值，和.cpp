#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10000
int main()
{
int i;
int n;
int value;
int max=-MAXSIZE;
int min=MAXSIZE;
int sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&value);
if(value>max) max=value;
if(value<min) min=value;
sum+=value;
}
printf("%d\n",max);
printf("%d\n",min);
printf("%d\n",sum);
return 0;
}
