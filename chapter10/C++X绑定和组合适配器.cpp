#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std; 

// ������������������� 
bool g(int x, int y){
	return x > y;
}
int main(){
	int arr[] = {30, 90, 10, 40, 70, 50, 20, 80};
	const int N = sizeof(arr) / sizeof(int);
	vector<int> a(arr, arr+N);
	
	vector<int>::iterator p;
	// ����Ԫν��greater��40�󶨳�ΪһԪν�� 
	p = find_if(a.begin(), a.end(), bind2nd(greater<int>(), 40));
	if(p == a.end()){
		cout<<"no element greater than 40"<<endl;
	}else{
		cout<<"first element greater than 40 is: "<<*p<<endl;
	}
	// ���� ptr_fun ����һ���������� 
	p = find_if(a.begin(), a.end(), bind2nd(ptr_fun(g), 40));
	if(p == a.end()){
		cout<<"no element greater than 40"<<endl;
	}else{
		cout<<"first element greater than 40 is: "<<*p<<endl;
	}
	// �ҵ���һ��������15��Ԫ�� 
	p = find_if(a.begin(), a.end(), not1(bind2nd(greater<int>(), 15)));
	if(p == a.end()){
		cout<<"no element is not greater than 15"<<endl;
	}else{
		cout<<"first element that is not greater than 15 is: "<<*p<<endl;
	}
	// �ҵ���һ��������15��Ԫ�� 
	p = find_if(a.begin(), a.end(), bind2nd(not2(greater<int>()), 15));
	if(p == a.end()){
		cout<<"no element is not greater than 15"<<endl;
	}else{
		cout<<"first element that is not greater than 15 is: "<<*p<<endl;
	}
	return 0;
}

