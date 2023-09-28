
#include<stdio.h>
int main()
{
int a,b,c,d,e,f,t,all;
scanf("%d",&t);
for(a=1;a<10;a++)
for(b=0;b<10;b++)
for(c=0;c<10;c++)
for(d=0;d<10;d++)
for(e=0;e<10;e++)
{
if(a==e)
if(b==d)
{
all=a+b+c+d+e;
if(all==t)
printf("%d\n",a*10000+b*1000+c*100+d*10+e);
}
}
for(a=1;a<10;a++)
for(b=0;b<10;b++)
for(c=0;c<10;c++)
for(d=0;d<10;d++)
for(e=0;e<10;e++)
for(f=0;f<10;f++)
{
if(a==f)
if(b==e)
if(c==d)
{
all=a+b+c+d+e+f;
if(all==t)
printf("%d\n",a*100000+b*10000+c*1000+d*100+e*10+f);
}
}
return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
int n,a,b,c,t;
cin>>n;
for(a=1;a<10;a++)
for(b=0;b<10;b++)
for(c=0;c<10;c++)
{
t=a*10001+b*1010+c*100;
if(2*a+2*b+c==n)
cout<<t<<endl;
}
for(a=1;a<10;a++)
for(b=0;b<10;b++)
for(c=0;c<10;c++)
{
t=a*100001+b*10010+c*1100;
if(2*a+2*b+2*c==n)
cout<<t<<endl;
}
return 0;
}*/

