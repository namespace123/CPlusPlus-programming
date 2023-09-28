#ifndef STACK_H
#define STACK_H
#include <cassert>
#include <iostream>
using namespace std;

// 模板也可以定义其他的常量
template<class T, int SIZE = 50>

class Stack{
	T list[SIZE];
	int top;
public:
	Stack();
	void push(const T &item);
	T pop();
	void clear();
	const T &peek() const;
	bool isEmpty() const;
	bool isFull() const;
};
template<class T, int SIZE>
Stack<T,SIZE>::Stack(){
	
}
template<class T, int SIZE>
void Stack<T,SIZE>::push(const T &item){
	assert(!isFull());
	list[++top] = item;
}
template<class T, int SIZE>
T Stack<T,SIZE>::pop(){
	assert(!isEmpty());
	return list[top--];
}
template<class T, int SIZE>
void Stack<T,SIZE>::clear(){
	top = -1;
}
template<class T, int SIZE>
const T &Stack<T,SIZE>::peek() const{
	assert(!isEmpty());
	return list[top];
}
template<class T, int SIZE>
bool Stack<T,SIZE>::isEmpty() const{
	return top == -1;
}
template<class T, int SIZE>
bool Stack<T,SIZE>::isFull() const{
	return top == SIZE - 1;
}

#endif
