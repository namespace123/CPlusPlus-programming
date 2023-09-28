#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=100;i<300;i++) 
	    if(i%4==0) 
		    cout<<i<<endl;
    cout<<endl<<endl;
    for(i=100;i<300;i++) 
	    if(i%4==0&&i%100!=0||i%400==0) 
		    cout<<i<<endl;
	return 0;
} 