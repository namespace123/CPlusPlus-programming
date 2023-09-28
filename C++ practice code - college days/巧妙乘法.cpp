#include<iostream>
using namespace std;
int main ()
{
	int i,j,k,a=0;
	for(i=1;i<=5;i++)
	    for(j=1;j<=4;j++)
	        for(k=1;k<=3;k++)
	            a++;
    cout<<a<<endl;
    return 0;
}
