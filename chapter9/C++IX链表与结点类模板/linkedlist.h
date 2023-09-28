#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <cassert>
#include <iostream>
#include "node.h"
using namespace std;

template<class T>
class Linkedlist{
	Node<T> *front, *rear;  // 表头和表尾指针
	Node<T> *prevPtr, *currPtr;  // 记录表当前遍历的指针信息
	int size;  // 表的长度
	int position;  // 当前结点在表中的位置
	// 生成新结点
	Node<T> *newNode(const T &item, Node<T> *ptrNext = NULL);
	// 释放结点
	void freeNode(Node<T> *p);
	// 将链表L复制到当前表，私有函数copy会被复制构造函数、operator = 调用，可避免代码的冗余
	void copy(const Linkedlist<T> & L);
public:
	// 构造函数
	Linkedlist();
	// 析构函数
	~Linkedlist();
	// 复制构造函数
	Linkedlist(const Linkedlist<T> & L);
	// operator = 重写函数
	Linkedlist<T> & operator = (const Linkedlist<T> & L);
	// 返回链表长度
	int getSize() const;
	// 判断链表是否为空
	bool isEmpty() const;
	// 初始化游标的位置
	void reset(int pos = 0);
	// 使游标移到下一个结点
	void next();
	// 判断游标是否到了链尾
	bool endOfList() const;
	// 返回游标当前位置
	int currPosition();
	// 在表头插入结点
	void insertFront(const T & item);
	// 在表尾插入结点
	void insertRear(const T & item);
	// 在当前结点之前插入结点
	void insertAt(const T &item);
	// 在当前结点之后插入结点
	void insertAfter(const T &item);
	// 删除表头结点
	T deleteFront();
	// 删除当前结点
	void deleteCurrent();
	// 返回当前结点成员数据的引用
	T& data();
	const T& data() const;
	// 清空链表：释放所有结点的内存空间
	void clear();
	// 遍历结点
	void print();
};

// 生成新结点
template<class T>
Node<T>* Linkedlist<T>::newNode(const T &item, Node<T> *ptrNext){
	Node<T> *tempPtr = new Node<T>(item, ptrNext);
	return tempPtr;
}

// 释放结点
template<class T>
void Linkedlist<T>::freeNode(Node<T> *p){
	delete p;
}
// 将链表L复制到当前表(空表)，私有函数copy会被复制构造函数、operator = 调用，可避免代码的冗余
template<class T>
void Linkedlist<T>::copy(const Linkedlist<T>& L){
	L.reset();
	for(int i = 0; i < L.getSize(); i++){
		insertRear(L.data());
		L.next();
	}
}

// 构造函数
template<class T>
Linkedlist<T>::Linkedlist(){
	size = 0;
	front = rear = new Node<T>(0);
	currPtr = prevPtr = front;
}

// 复制构造函数
template<class T>
Linkedlist<T>::Linkedlist(const Linkedlist<T> &L){

	clear();
	copy(L);
	cout<<"call copy constructor "<<endl;
}
// operator = 重写函数
template<class T>
Linkedlist<T> & Linkedlist<T>::operator = (const Linkedlist<T> & L){
    clear();
    copy(L);
    cout<<"call overload operator = "<<endl;
    return *this;
}
// 返回链表长度
template<class T>
int Linkedlist<T>::getSize() const{
	return size;
}
// 判断链表是否为空
template<class T>
bool Linkedlist<T>::isEmpty() const{
	if(front == rear){
		return true;
	}else{
		return false;
	}
}
// 初始化游标的位置
template<class T>
void Linkedlist<T>::reset(int pos){
	prevPtr = front;
	currPtr = front->nextNode();
	position = pos;
	for(int i = 0; i < position; i++){
		prevPtr = currPtr;
		currPtr = prevPtr->nextNode();
	}
}
// 使游标移到下一个结点
template<class T>
void Linkedlist<T>::next(){
	prevPtr = currPtr;
	currPtr = prevPtr->nextNode();
}
// 判断游标是否到了链尾
template<class T>
bool Linkedlist<T>::endOfList() const{
	if(currPtr == NULL){
		return true;
	}else{
		return false;
	}
}
// 返回游标当前位置
template<class T>
int Linkedlist<T>::currPosition(){
	Node<T> *tempPtr = front->nextNode();
	position = 0;
	while(tempPtr != currPtr){
		tempPtr = tempPtr->nextNode();
		position++;
	}
	return position;
}
// 在表头插入结点
template<class T>
void Linkedlist<T>::insertFront(const T &item){
	prevPtr = front;
	currPtr = new Node<T>(item, front->nextNode());
	front->next = currPtr;
	// 如果原链表为空，那么链尾结点也需要重新赋值
	if(rear == front){
		rear = currPtr;
	}
	size++;
}
// 在表尾插入结点
template<class T>
void Linkedlist<T>::insertRear(const T &item){
	prevPtr = currPtr;
	currPtr = new Node<T>(item);
	prevPtr->next = currPtr;
	rear = currPtr;
	size++;
}
// 在当前结点之前插入结点
template<class T>
void Linkedlist<T>::insertAt(const T &item){
	currPtr = new Node<T>(item, currPtr);
	prevPtr->next = currPtr;
	size++;
}
// 在当前结点之后插入结点
template<class T>
void Linkedlist<T>::insertAfter(const T &item){
	prevPtr = currPtr;
	currPtr = new Node<T>(item, currPtr->nextNode());
	prevPtr->next = currPtr;
	if(rear == front){
		rear = currPtr;
	}
	size++;
}
// 删除表头结点
template<class T>
T Linkedlist<T>::deleteFront(){
	currPtr = front->nextNode();
	delete front;
	front = currPtr;
	size--;
	return front->data;
}
// 删除当前结点
template<class T>
void Linkedlist<T>::deleteCurrent(){
	if(rear == front){
		cout<<"the list has already been empty!"<<endl;
		return;
	}
	Node<T> *tempPtr = currPtr->nextNode();
	delete currPtr;
	currPtr = prevPtr;
	currPtr->next = tempPtr;
	if(tempPtr == 0){
		rear = currPtr;
	}
	size--;
}
// 返回当前结点成员数据的引用
template<class T>
T& Linkedlist<T>::data(){
	return currPtr->data;
}
template<class T>
const T& Linkedlist<T>::data() const{

}
// 清空链表：释放所有结点的内存空间
template<class T>
void Linkedlist<T>::clear(){
	Node<T> *tempPtr = front->nextNode();
	while(tempPtr != NULL){
		Node<T> *tempQ = tempPtr;
		tempPtr = tempPtr->nextNode();
		delete tempQ;
		size--;
	}
	front->next = NULL;
	rear = front;
	currPtr = prevPtr = front;
}
// 析构函数
template<class T>
Linkedlist<T>::~Linkedlist(){
	clear();
	delete front;
}
// 遍历结点
template<class T>
void Linkedlist<T>::print(){
	cout<<"List: "<<endl;
	reset();
	while(!endOfList()){
		cout<<this->data()<<" ";
		next();
	}
	cout<<endl;
}

#endif

