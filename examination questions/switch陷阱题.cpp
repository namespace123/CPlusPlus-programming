#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/*
�����Ķ��ⶼ���������ʲô����һ���ǿ�switch�������Լ�ǰ��++������ͺ���++�����������
���Ⲣ���ѣ�������ͦϸ�ģ�����switch������Ƕ�� switch������Ȼ�󲢲���ÿһ��switch������default��䣬
Ҳ����ÿһ��case����������break��䣬�ٸ����ӣ�break�ŵĵط���һ���ԣ����������ô����˼��
*/
int main()
{
	int a=4,b=3,c=0;
	for (int k=0;k<4;k++)//����ע��ǰ���������Լ��ͺ������� ���Լ������� 
	{
		switch(--a>0)
		{
			case 1:{
				switch(--b)
				{
					case 2:cout<<"&";break;
					case 1:cout<<"@";break;
				}
				
			}//ע������û��break��䡣 
			case 0:{
				switch(c++)
				{
					case 0:cout<<"#";//ע������Ҳû��break��䡣 
					case 1:cout<<"*";
					case 2:cout<<"%";
				}
				
			}break;	
		}	
		cout<<"!"<<endl;
	} 
	return 0;
}

/*�����
&#*%!
@*%!
%�� 
!
*/ 

