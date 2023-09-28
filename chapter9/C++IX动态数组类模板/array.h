#ifndef ARRAY_H
#define ARRAY_H
#include <cassert>
#include <iostream>
using namespace std;

template<class T>
class Array{
	int size;
	T* list;
public:
	Array(int sz = 50);
	Array(const Array<T> &a);
	~Array();
	// ���� =��ǰ��󲻱䣩
	Array<T> & operator =(const Array<T> &a);
	// ���� �±�
	T & operator [] (int t);
	const T & operator [] (int t) const;
	// ���ص� T* ����
	operator T * ();
	operator const T * () const;
	int getSize() const;
	void resize(int sz);
};
// ���캯��
template<class T> Array<T>::Array(int sz){
	assert(sz >= 0); // ���ԣ����鲻Ϊ�� 
	size = sz;
	list = new T[size];
} 
// �������� 
template<class T> Array<T>::~Array(){
	delete[] list; 
} 
// ���ƹ��캯������Ҫ�ԣ�������Ĭ�ϵĸ��ƹ��캯����ǳ�㸴�ƣ���Ϊ����Ҫ������㸴�ƣ�����Ҫ�Զ��壩
template<class T> Array<T>::Array(const Array<T> &a){
	size = a.size;
	list = new T[size];
	for(int i = 0; i < size; i++){
		list[i] = a.list[i];
	}
}
// �������Զ���ĸ�ֵ�����Ҳ��ǳ�㸴�ƣ�����������Ҫ���� = ʵ�����
template<class T> Array<T> & Array<T>::operator = (const Array<T> &a){
	// �����ж���������������ĸ�ֵ����
	if(&a != this){
		if(&a.size != size){
			delete[] list;
			size = a.list;
			list = new T[size];
		}
		for(int i = 0; i < size; i++){
			list[i] = a.list[i];
		}
	}
	return *this;
}
// �����±������
template<class T> T & Array<T>::operator [] (int n){
	assert(n >= 0 && n < size);
	return list[n];
}
// const�汾�����±������
template<class T> const T & Array<T>::operator [] (int n) const{
	assert(n >= 0 && n < size);
	return list[n];
}
// ����ָ��ת�������*
template<class T> Array<T>::operator T* (){
	return list;
}

template<class T> int Array<T>::getSize() const{
	return size;
}

template<class T> void Array<T>::resize(int sz){
	assert(sz >= 0);
	if(sz != size){
		T* newList = new T[sz];
		int n = (sz < size) ? sz : size;
		for(int i = 0; i < n; i++){
			newList[i] = list[i];
		}
		delete[] list;
		list = newList;
		size = sz;
	}
}

#endif

