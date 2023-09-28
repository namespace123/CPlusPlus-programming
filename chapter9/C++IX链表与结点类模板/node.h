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
	// ���캯��
	Node(const T &data, Node<T> *next = 0);
	// ����һ����̽��
	void insertAfter(Node<T> *p);
	// ɾ����̽��,��������ɾ���Ľ��
	Node<T> *deleteAfter();
	// ���غ�̽��
	Node<T> *nextNode() const;
};
// ���캯��
template<class T>
Node<T>::Node(const T &data, Node<T> * next):data(data), next(next){}

// ����һ����̽��
template<class T>
void Node<T>::insertAfter(Node<T> *p){
	p.next = next;
	next = p;
}
// ɾ����̽��,��������ɾ���Ľ��
template<class T>
Node<T> *Node<T>::deleteAfter(){
	Node<T> *p = next;
	if(next == 0){
		return 0;
	}
	next = p.next;
	return p;
}
// ���غ�̽��
template<class T>
Node<T> *Node<T>::nextNode() const{
	return next;
}

#endif

