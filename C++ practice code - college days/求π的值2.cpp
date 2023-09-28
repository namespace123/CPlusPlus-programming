#include<iostream.h>
#include<math.h>
using namespace std;
int main ()
{
	double PI=2.0,t,a=0;
	int n;
	cin>>n;
	do
	{
		t=PI;
		a=sqrt(2+a);
		PI=PI*2/a;
	}while(PI-t>pow(0.1,a));
	cout<<"PI="<<PI<<endl;
	return 0;
}
	