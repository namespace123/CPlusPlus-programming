#include<iostream> 
using namespace std;
int main()
{
	int num;
	cout<<"输入一个三位数"<<endl; 
	char *a[]={"","one","two","three","four","five","six","seven","eight","nine"};
	char *b[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen",
	"seventeen","eighteen","nineteen"};
	char *c[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty",
	"ninety"};
	cin>>num;
	cout<<a[num/100];
	if(num%100==0)
	    cout<<" hundred"<<endl;
    else cout<<" hundred and ";
    if(num/10%10==0)
        cout<<a[num%10]<<endl;
    else if(num/10%10==1)
        cout<<b[num%10]<<endl;
    else 
	{
		if(num%10==0) cout<<c[num/10%10]<<endl;
		else cout<<c[num/10%10]<<" "<<a[num%10]<<endl;
	}
	return 0;
}
        
        