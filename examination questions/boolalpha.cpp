#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
/*
�ֱ����false,false,true��
str1��str2�����ַ����飬ÿ���������Լ��Ĵ洢�������ǵ�ֵ���Ǹ��洢���׵�ַ�����ȣ�
str3��str4ͬ�ϣ�ֻ�ǰ�const���壬������ָ��������������޸ġ�
str5��str6������������ַ�ָ�룬��������洢�������ġ�abc���Գ�����ʽ���ھ�̬���������������Լ�����ָ������׵�ַ��ָ�룬��ȡ�
*/ 
    char str1[]       = "abc";
	char str2[]       = "abc";
	const char str3[] = "abc"; 
	const char str4[] = "abc"; 
	const char* str5  = "abc";
	const char* str6  = "abc";
	cout << boolalpha << ( str1==str2 ) << endl; // ���ʲô��
	cout << boolalpha << ( str3==str4 ) << endl; // ���ʲô��
	cout << boolalpha << ( str5==str6 ) << endl; // ���ʲô��
	
	 cout << (true?"2":"1") << endl; // �ʺź��������ֵ������ͬһ���� 
	return 0;
}

