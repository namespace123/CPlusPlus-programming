#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j=0;
	for(i=100;i<=999;i++)
	{
        if(i==pow(i%10,3)+pow(i%100/10,3)+pow(i/100,3))
            cout<<i<<endl; 
    }
	return 0;
}
/*#include<stdio.h>
int main()
{
    int i,s,m,t;
    for(i=100;i<1000;i++)
    {
        s=i/100;
        m=i%10;
        t=(i-100*s)/10;
                if(i==s*s*s+m*m*m+t*t*t)
            printf("%d\n",i);
    }
    return 0;
} */
