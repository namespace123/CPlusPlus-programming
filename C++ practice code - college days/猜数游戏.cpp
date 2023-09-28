#include<iostream>
using namespace std;
int main ()
/*{
    int a=29,b;
	while(cin>>b)	
	{
		if(b>a) cout<<"猜大了"<<endl;
		else if(b<a)  cout<<"猜小了"<<endl;
		else break; 
	}
	cout<<"你真聪明！"<<endl;
	return 0; 
}*/
{
	int a=29,b;
	do	
	{
		cin>>b;
		if(b>a) cout<<"猜大了"<<endl;
		else if(b<a)  cout<<"猜小了"<<endl;
	}while(a!=b);
	cout<<"你真聪明！"<<endl;
	return 0; 
}
