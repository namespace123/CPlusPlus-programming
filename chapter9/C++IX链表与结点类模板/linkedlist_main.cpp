#include <cassert>
#include "linkedlist.h"
#include <iostream>
using namespace std;

int main(){
	
	// 创建链表
	Linkedlist<int> list;
	int a[10] = {3, 6, 5, 7, 5, 2, 4, 5, 9, 10};
	for(int i = 0; i < 10; i++){
//		int item;
//		cin>>item;
		list.insertFront(a[i]);
	}
	// 遍历链表
	list.print();
	// 删除结点
	cout<<"delete a number: "<<endl;
	list.reset();
	while(!list.endOfList()){
		if(list.data() == a[2]){
			list.deleteCurrent();
		}
		list.next();
	}
	list.print();
	
	cout<<"delete the front: "<<endl;
	list.deleteFront();
	list.print();
	
	cout<<"insert some numbers: "<<endl;
	list.reset(3);
	list.insertAt(15);
	list.insertAfter(20);
	list.insertFront(100);
	list.insertRear(200);
	list.print();

	// 查找结点
	
	// 清空链表
	cout<<"clear the linkedlist: "<<endl;
	list.clear();
	list.print();


	return 0;
}

