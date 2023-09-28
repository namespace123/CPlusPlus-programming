#include <iostream>
#include <vector>
#include <iterator>
#include<typeinfo>
#include<list>
#include<deque>
using namespace std;

// n����ʿ�� ���� m ����ʿ���� 
template<class T>
void joseph(T collection, int n, int m){
	
	if(n < 1 || m < 1){
		cout<<"there is an error!"<<endl;
		return;
	} 
	// ����n����
	for(int i = 1; i <= n; i++){
		collection.push_back(i);
	} 
	
	// ������ ɾ������ m ����ʿ�������� n-1 �� 
	class T::iterator iter = collection.begin();
	int count = 1;
	while(collection.size() > 1){
		while(count % m == 0 && collection.size() > 1){
			count = 1;
			if(  typeid(collection)   !=   typeid(list<int>)   ){
				// vector �� deque ���ڷǽ��������������� erase ���ص�����һ��Ԫ�� 
				iter = collection.erase(iter);
			}else{
				// list ���ڽ��������������� erase ���ص��ǵ�ǰԪ�� 
				collection.erase(iter++);
			}
			if(iter == collection.end()){
				iter = collection.begin();
			}
		}
		count++;
		iter++;
		if(iter == collection.end()){
			iter = collection.begin();
		}
	}
	// ������ʣ�µ��Ǹ���ʿ 
	cout<<"the last one is "<<*iter<<endl;
} 


int main(){
	
	vector<int> v;
	deque<int> deq;
	list<int> l;

	joseph(v, 10, 7);
	joseph(deq, 10, 7);
	joseph(l, 10, 7);
	return 0;
}

