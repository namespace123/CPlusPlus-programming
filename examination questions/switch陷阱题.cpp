#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/*
程序阅读题都是问你输出什么，第一题是考switch操作，以及前置++运算符和后置++运算符的区别。
这题并不难，但考的挺细的，属于switch操作里嵌套 switch操作，然后并不是每一个switch都包含default语句，
也不是每一个case语句结束后都有break语句，举个例子：break放的地方不一定对，但整体就这么个意思。
*/
int main()
{
	int a=4,b=3,c=0;
	for (int k=0;k<4;k++)//整体注意前置自增，自减和后置自增 ，自减的区别 
	{
		switch(--a>0)
		{
			case 1:{
				switch(--b)
				{
					case 2:cout<<"&";break;
					case 1:cout<<"@";break;
				}
				
			}//注意这里没有break语句。 
			case 0:{
				switch(c++)
				{
					case 0:cout<<"#";//注意这里也没有break语句。 
					case 1:cout<<"*";
					case 2:cout<<"%";
				}
				
			}break;	
		}	
		cout<<"!"<<endl;
	} 
	return 0;
}

/*结果：
&#*%!
@*%!
%！ 
!
*/ 

