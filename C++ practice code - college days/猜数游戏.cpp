#include<iostream>
using namespace std;
int main ()
/*{
    int a=29,b;
	while(cin>>b)	
	{
		if(b>a) cout<<"�´���"<<endl;
		else if(b<a)  cout<<"��С��"<<endl;
		else break; 
	}
	cout<<"���������"<<endl;
	return 0; 
}*/
{
	int a=29,b;
	do	
	{
		cin>>b;
		if(b>a) cout<<"�´���"<<endl;
		else if(b<a)  cout<<"��С��"<<endl;
	}while(a!=b);
	cout<<"���������"<<endl;
	return 0; 
}
