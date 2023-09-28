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
	// 重载 =（前变后不变）
	Array<T> & operator =(const Array<T> &a);
	// 重载 下标
	T & operator [] (int t);
	const T & operator [] (int t) const;
	// 重载到 T* 类型
	operator T * ();
	operator const T * () const;
	int getSize() const;
	void resize(int sz);
};
// 构造函数
template<class T> Array<T>::Array(int sz){
	assert(sz >= 0); // 断言：数组不为空 
	size = sz;
	list = new T[size];
} 
// 析构函数 
template<class T> Array<T>::~Array(){
	delete[] list; 
} 
// 复制构造函数（必要性：编译器默认的复制构造函数是浅层复制，因为这里要进行深层复制，所以要自定义）
template<class T> Array<T>::Array(const Array<T> &a){
	size = a.size;
	list = new T[size];
	for(int i = 0; i < size; i++){
		list[i] = a.list[i];
	}
}
// 编译器自定义的赋值运算符也是浅层复制，所以这里需要重载 = 实现深拷贝
template<class T> Array<T> & Array<T>::operator = (const Array<T> &a){
	// 以下判断语句避免了无意义的赋值可能
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
// 重载下标运算符
template<class T> T & Array<T>::operator [] (int n){
	assert(n >= 0 && n < size);
	return list[n];
}
// const版本重载下标运算符
template<class T> const T & Array<T>::operator [] (int n) const{
	assert(n >= 0 && n < size);
	return list[n];
}
// 重载指针转换运算符*
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

