#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <cassert>
#include <iostream>
#include "node.h"
using namespace std;

template<class T>
class Linkedlist{
	Node<T> *front, *rear;  // ��ͷ�ͱ�βָ��
	Node<T> *prevPtr, *currPtr;  // ��¼��ǰ������ָ����Ϣ
	int size;  // ��ĳ���
	int position;  // ��ǰ����ڱ��е�λ��
	// �����½��
	Node<T> *newNode(const T &item, Node<T> *ptrNext = NULL);
	// �ͷŽ��
	void freeNode(Node<T> *p);
	// ������L���Ƶ���ǰ��˽�к���copy�ᱻ���ƹ��캯����operator = ���ã��ɱ�����������
	void copy(const Linkedlist<T> & L);
public:
	// ���캯��
	Linkedlist();
	// ��������
	~Linkedlist();
	// ���ƹ��캯��
	Linkedlist(const Linkedlist<T> & L);
	// operator = ��д����
	Linkedlist<T> & operator = (const Linkedlist<T> & L);
	// ����������
	int getSize() const;
	// �ж������Ƿ�Ϊ��
	bool isEmpty() const;
	// ��ʼ���α��λ��
	void reset(int pos = 0);
	// ʹ�α��Ƶ���һ�����
	void next();
	// �ж��α��Ƿ�����β
	bool endOfList() const;
	// �����α굱ǰλ��
	int currPosition();
	// �ڱ�ͷ������
	void insertFront(const T & item);
	// �ڱ�β������
	void insertRear(const T & item);
	// �ڵ�ǰ���֮ǰ������
	void insertAt(const T &item);
	// �ڵ�ǰ���֮�������
	void insertAfter(const T &item);
	// ɾ����ͷ���
	T deleteFront();
	// ɾ����ǰ���
	void deleteCurrent();
	// ���ص�ǰ����Ա���ݵ�����
	T& data();
	const T& data() const;
	// ��������ͷ����н����ڴ�ռ�
	void clear();
	// �������
	void print();
};

// �����½��
template<class T>
Node<T>* Linkedlist<T>::newNode(const T &item, Node<T> *ptrNext){
	Node<T> *tempPtr = new Node<T>(item, ptrNext);
	return tempPtr;
}

// �ͷŽ��
template<class T>
void Linkedlist<T>::freeNode(Node<T> *p){
	delete p;
}
// ������L���Ƶ���ǰ��(�ձ�)��˽�к���copy�ᱻ���ƹ��캯����operator = ���ã��ɱ�����������
template<class T>
void Linkedlist<T>::copy(const Linkedlist<T>& L){
	L.reset();
	for(int i = 0; i < L.getSize(); i++){
		insertRear(L.data());
		L.next();
	}
}

// ���캯��
template<class T>
Linkedlist<T>::Linkedlist(){
	size = 0;
	front = rear = new Node<T>(0);
	currPtr = prevPtr = front;
}

// ���ƹ��캯��
template<class T>
Linkedlist<T>::Linkedlist(const Linkedlist<T> &L){

	clear();
	copy(L);
	cout<<"call copy constructor "<<endl;
}
// operator = ��д����
template<class T>
Linkedlist<T> & Linkedlist<T>::operator = (const Linkedlist<T> & L){
    clear();
    copy(L);
    cout<<"call overload operator = "<<endl;
    return *this;
}
// ����������
template<class T>
int Linkedlist<T>::getSize() const{
	return size;
}
// �ж������Ƿ�Ϊ��
template<class T>
bool Linkedlist<T>::isEmpty() const{
	if(front == rear){
		return true;
	}else{
		return false;
	}
}
// ��ʼ���α��λ��
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
// ʹ�α��Ƶ���һ�����
template<class T>
void Linkedlist<T>::next(){
	prevPtr = currPtr;
	currPtr = prevPtr->nextNode();
}
// �ж��α��Ƿ�����β
template<class T>
bool Linkedlist<T>::endOfList() const{
	if(currPtr == NULL){
		return true;
	}else{
		return false;
	}
}
// �����α굱ǰλ��
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
// �ڱ�ͷ������
template<class T>
void Linkedlist<T>::insertFront(const T &item){
	prevPtr = front;
	currPtr = new Node<T>(item, front->nextNode());
	front->next = currPtr;
	// ���ԭ����Ϊ�գ���ô��β���Ҳ��Ҫ���¸�ֵ
	if(rear == front){
		rear = currPtr;
	}
	size++;
}
// �ڱ�β������
template<class T>
void Linkedlist<T>::insertRear(const T &item){
	prevPtr = currPtr;
	currPtr = new Node<T>(item);
	prevPtr->next = currPtr;
	rear = currPtr;
	size++;
}
// �ڵ�ǰ���֮ǰ������
template<class T>
void Linkedlist<T>::insertAt(const T &item){
	currPtr = new Node<T>(item, currPtr);
	prevPtr->next = currPtr;
	size++;
}
// �ڵ�ǰ���֮�������
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
// ɾ����ͷ���
template<class T>
T Linkedlist<T>::deleteFront(){
	currPtr = front->nextNode();
	delete front;
	front = currPtr;
	size--;
	return front->data;
}
// ɾ����ǰ���
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
// ���ص�ǰ����Ա���ݵ�����
template<class T>
T& Linkedlist<T>::data(){
	return currPtr->data;
}
template<class T>
const T& Linkedlist<T>::data() const{

}
// ��������ͷ����н����ڴ�ռ�
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
// ��������
template<class T>
Linkedlist<T>::~Linkedlist(){
	clear();
	delete front;
}
// �������
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

