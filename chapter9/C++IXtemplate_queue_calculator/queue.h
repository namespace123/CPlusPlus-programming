#ifndef QUEUE_H
#define QUEUE_H
#include <cassert>
#include <iostream>
using namespace std;

// 模板也可以定义其他的常量
template<class T, int SIZE = 50>

class Queue{
	int front, rear, count;
	T list[SIZE];
public:
	Queue();
	void insert(const T &item);
	T remove();
	void clear();
	const T &getFront() const;
	int getLength() const;
	bool isEmpty() const;
	bool isFull() const;
};
template<class T, int SIZE>
Queue<T,SIZE>::Queue():front(0), rear(0), count(0){
}
template<class T, int SIZE>
void Queue<T,SIZE>::insert(const T &item){
	assert(count != SIZE);
	count++;
	list[rear] = item;
	rear = (rear + 1) % SIZE;
}
template<class T, int SIZE>
T Queue<T,SIZE>::remove(){
	assert(count != 0);
	int temp = front;
	count--;
	front = (front + 1) % SIZE;
	return list[temp];
}
template<class T, int SIZE>
void Queue<T,SIZE>::clear(){
	count = 0;
	front = 0;
	rear = 0;
}
template<class T, int SIZE>
const T &Queue<T,SIZE>::getFront() const{
	return list[front];
}
template<class T, int SIZE>
int Queue<T,SIZE>::getLength() const{
	return count;
}
template<class T, int SIZE>
bool Queue<T,SIZE>::isEmpty() const{
	return count == 0;
}
template<class T, int SIZE>
bool Queue<T,SIZE>::isFull() const{
	return count == SIZE;
}

#endif
