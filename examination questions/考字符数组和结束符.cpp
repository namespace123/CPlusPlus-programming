#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
// 这题就主要考字符串结束符‘\0’,它的ascii码是0.这题是要写出程序功能的。 
int main()
{
	char s[] = "2d876fv8d76fv\0hs8c7s8d7c";//注意字符数组中有\0结束符哦
	int i=0,num=0;
	while(s[i]!=0)
	{
		if (s[i]<='9' && s[i]>='0')
			num++;
		i++;
	}
	cout<<num<<endl;  // 7
	return 0;
}

