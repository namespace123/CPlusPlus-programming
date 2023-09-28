#include <cassert>
#include <iostream>
#include "array.h"
using namespace std;

int main(){
	// 重写指针运算符之后，就可以用这样的形式来表示数组啦
	Array<int> a(10);
	int n, count = 0;
	cout<<"输入n，查找2-n之间的所有质数"<<endl;
	cin>>n;
	for(int i = 2; i < n; i++){
		bool isPrime = true;
		for(int j = 2; j <= count; j++){
			if(i % j == 0){
				isPrime = false;
				break;
			}
		}
		if(isPrime){
			if(count == a.getSize()){
				a.resize(count * 2);
			}
			a[count++] = i;
		}
	}
	for(int i = 0; i < count; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}

