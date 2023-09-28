#ifndef NODE_H
#define NODE_H
#include <cassert>
#include <iostream>
using namespace std;

template<class T>
class Node{
public:
	Node<T> *next;
	T data;
	// 构造函数
	Node(const T &data, Node<T> *next = 0);
	// 插入一个后继结点
	void insertAfter(Node<T> *p);
	// 删除后继结点,并返回所删除的结点
	Node<T> *deleteAfter();
	// 返回后继结点
	Node<T> *nextNode() const;
};
// 构造函数
template<class T>
Node<T>::Node(const T &data, Node<T> * next):data(data), next(next){}

// 插入一个后继结点
template<class T>
void Node<T>::insertAfter(Node<T> *p){
	p.next = next;
	next = p;
}
// 删除后继结点,并返回所删除的结点
template<class T>
Node<T> *Node<T>::deleteAfter(){
	Node<T> *p = next;
	if(next == 0){
		return 0;
	}
	next = p.next;
	return p;
}
// 返回后继结点
template<class T>
Node<T> *Node<T>::nextNode() const{
	return next;
}

#endif

