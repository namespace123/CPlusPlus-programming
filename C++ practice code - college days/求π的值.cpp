#include<iostream>
using namespace std;
double power2(double x,int n)
{
	double val=1.0;
	while (n--)
	    val*=x;
    return val;
}
double power1(double x)
{
	int i=1,s=1;
	double m=0,t;
	do
	{
		t=power2(x,i)/i;
		m+=s*t;
		s=-s;
		i++;
        i++;
	} while(t>1e-15);
	return m;
}

int main ()
{
	double a=1.0/5,b=1.0/239,y,m,n;
    m=power1(a);
    n=power1(b);
    y=16.0*m-4.0*n;
    cout<<y<<endl;	
    return 0;
} 