#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<n/100<<"张100元"<<endl;
    n=n-n/100*100;
    cout<<n/50<<"张50元"<<endl;
    n=n-n/50*50;
    cout<<n/20<<"张20元"<<endl;
    n=n-n/20*20;
    cout<<n/10<<"张10元"<<endl;
    n=n-n/10*10;
    cout<<n/5<<"张5元"<<endl;
    n=n-n/5*5;
    cout<<n/2<<"张2元"<<endl;
    n=n-n/2*2;
    cout<<n<<"张1元"<<endl;
    return 0;
} 