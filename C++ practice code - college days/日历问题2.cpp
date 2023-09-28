#include<iostream>
using namespace std;
int poj(int month,int year)
{
	int i,day;
	i=(year%4==0&&year%100!=0||year%400==0);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:day=31;break;
		case 2:day=28+i;break;
		case 4:
		case 6: 
		case 9: 
		case 11: day=30;break;
		default:cout<<"Error"<<endl;break;
	}
	return day;
}
									
			
int main()
{
	int n,i;
	while(cin>>n)
	{
		int day=31,month=10,year=2007;
		i=n+10;
		while(i>day)
		{
			i=i-day;
			month++;
			if(month>12)
			{
				month=1;
				year++;
			}
			day=poj(month,year);
		}
		cout<<year<<"-"<<month<<"-"<<i<<endl;
	}
	return 0;
}


