#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
// �������Ҫ���ַ�����������\0��,����ascii����0.������Ҫд�������ܵġ� 
int main()
{
	char s[] = "2d876fv8d76fv\0hs8c7s8d7c";//ע���ַ���������\0������Ŷ
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

