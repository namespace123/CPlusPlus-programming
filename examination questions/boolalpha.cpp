#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
/*
分别输出false,false,true。
str1和str2都是字符数组，每个都有其自己的存储区，它们的值则是各存储区首地址，不等；
str3和str4同上，只是按const语义，它们所指向的数据区不能修改。
str5和str6并非数组而是字符指针，并不分配存储区，其后的“abc”以常量形式存于静态数据区，而它们自己仅是指向该区首地址的指针，相等。
*/ 
    char str1[]       = "abc";
	char str2[]       = "abc";
	const char str3[] = "abc"; 
	const char str4[] = "abc"; 
	const char* str5  = "abc";
	const char* str6  = "abc";
	cout << boolalpha << ( str1==str2 ) << endl; // 输出什么？
	cout << boolalpha << ( str3==str4 ) << endl; // 输出什么？
	cout << boolalpha << ( str5==str6 ) << endl; // 输出什么？
	
	 cout << (true?"2":"1") << endl; // 问号后面的两个值必须是同一类型 
	return 0;
}

