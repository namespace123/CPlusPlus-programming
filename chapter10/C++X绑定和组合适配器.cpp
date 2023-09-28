#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std; 

// 绑定适配器、组合适配器 
bool g(int x, int y){
	return x > y;
}
int main(){
	int arr[] = {30, 90, 10, 40, 70, 50, 20, 80};
	const int N = sizeof(arr) / sizeof(int);
	vector<int> a(arr, arr+N);
	
	vector<int>::iterator p;
	// 将二元谓词greater与40绑定成为一元谓词 
	p = find_if(a.begin(), a.end(), bind2nd(greater<int>(), 40));
	if(p == a.end()){
		cout<<"no element greater than 40"<<endl;
	}else{
		cout<<"first element greater than 40 is: "<<*p<<endl;
	}
	// 利用 ptr_fun 构造一个函数对象 
	p = find_if(a.begin(), a.end(), bind2nd(ptr_fun(g), 40));
	if(p == a.end()){
		cout<<"no element greater than 40"<<endl;
	}else{
		cout<<"first element greater than 40 is: "<<*p<<endl;
	}
	// 找到第一个不大于15的元素 
	p = find_if(a.begin(), a.end(), not1(bind2nd(greater<int>(), 15)));
	if(p == a.end()){
		cout<<"no element is not greater than 15"<<endl;
	}else{
		cout<<"first element that is not greater than 15 is: "<<*p<<endl;
	}
	// 找到第一个不大于15的元素 
	p = find_if(a.begin(), a.end(), bind2nd(not2(greater<int>()), 15));
	if(p == a.end()){
		cout<<"no element is not greater than 15"<<endl;
	}else{
		cout<<"first element that is not greater than 15 is: "<<*p<<endl;
	}
	return 0;
}

