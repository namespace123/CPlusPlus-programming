#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<n/100<<"��100Ԫ"<<endl;
    n=n-n/100*100;
    cout<<n/50<<"��50Ԫ"<<endl;
    n=n-n/50*50;
    cout<<n/20<<"��20Ԫ"<<endl;
    n=n-n/20*20;
    cout<<n/10<<"��10Ԫ"<<endl;
    n=n-n/10*10;
    cout<<n/5<<"��5Ԫ"<<endl;
    n=n-n/5*5;
    cout<<n/2<<"��2Ԫ"<<endl;
    n=n-n/2*2;
    cout<<n<<"��1Ԫ"<<endl;
    return 0;
} 