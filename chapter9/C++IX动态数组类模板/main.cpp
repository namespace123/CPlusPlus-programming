#include <cassert>
#include <iostream>
#include "array.h"
using namespace std;

int main(){
	// ��дָ�������֮�󣬾Ϳ�������������ʽ����ʾ������
	Array<int> a(10);
	int n, count = 0;
	cout<<"����n������2-n֮�����������"<<endl;
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

