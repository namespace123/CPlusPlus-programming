#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	char a[1001];
	int n;
	cin>>n;
	getchar();
	while(n--)
	{
		gets(a);
		cout<<strrev(a)<<endl;
	}
	return 0;
}

