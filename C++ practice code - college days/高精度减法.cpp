#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a,b;
	while(cin>>a>>b)
	{
		int num1[1000]={0},num2[1000]={0};
	    int length1,length2;
	    int i,j;
	    int max;
		length1=a.length();
		length2=b.length();
		max=length1>length2?length1:length2;
		for(i=0;i<length1;i++)
		{
			num1[i]=a[length1-i-1]-'0';
		}
		for(i=0;i<length2;i++)
		{
			num2[i]=b[length2-i-1]-'0';
		}
		for(i=0;i<max;i++)
		{
			num1[i]-=num2[i];
			if(num1[i]<0)
			{
				num1[i]+=10;
				num1[i+1]-=1;
			} 
		}
		for(i=max;i>=0;i--)
		    if(num1[i]!=0)
	    	{
			    j=i;
		     	break;
	    	}
		for(i=j;i>=0;i--)
		{
			cout<<num1[i];
		}
		cout<<endl;
	}
	return 0;
}
	
