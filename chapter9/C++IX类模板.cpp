# include <iostream>
using namespace std;

struct Student{
public:
	int id;
	float gpa;
}; 

template<class T>
class Store{
	T item;
	bool haveValue;
public:
	Store();
	T &getItem();
	void putItem(const T &x);
};
// 构造函数 
template<class T>
Store<T>::Store():haveValue(false){
}
// get函数 
template<class T>
T &Store<T>::getItem(){
	// 如果师徒提取未初始化的数据，则终止程序 
	if(!haveValue){
		cout<<"No item present!"<<endl;
		exit(1);
	} 
	return item;
} 
// set函数 
template<class T>
void Store<T>::putItem(const T &x){
	// 表示已初始化 
	haveValue = true;
	item = x;
}

int main(){
	// T替换成int 
	Store<int> s1;
	s1.putItem(3);
	cout<<s1.getItem()<<endl; 
	
	// T替换成Student
	Student g = {1000, 23};
	Store<Student> s2;
	s2.putItem(g);
	cout<<s2.getItem().id<<endl;
	
	// T替换成double 
	Store<double> s3;
	cout<<s1.getItem()<<endl;
	
	return 0;
}

