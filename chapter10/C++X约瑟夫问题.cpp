#include <iostream>
#include <vector>
#include <iterator>
#include<typeinfo>
#include<list>
#include<deque>
using namespace std;

// n个骑士， 报到 m 的骑士出列 
template<class T>
void joseph(T collection, int n, int m){
	
	if(n < 1 || m < 1){
		cout<<"there is an error!"<<endl;
		return;
	} 
	// 插入n个数
	for(int i = 1; i <= n; i++){
		collection.push_back(i);
	} 
	
	// 数数， 删除数到 m 的骑士，连续数 n-1 次 
	class T::iterator iter = collection.begin();
	int count = 1;
	while(collection.size() > 1){
		while(count % m == 0 && collection.size() > 1){
			count = 1;
			if(  typeid(collection)   !=   typeid(list<int>)   ){
				// vector 和 deque 属于非结点类容器，这里的 erase 返回的是下一个元素 
				iter = collection.erase(iter);
			}else{
				// list 属于结点类容器，这里的 erase 返回的是当前元素 
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
	// 输出最后剩下的那个骑士 
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

