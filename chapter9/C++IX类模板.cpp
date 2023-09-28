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
// ���캯�� 
template<class T>
Store<T>::Store():haveValue(false){
}
// get���� 
template<class T>
T &Store<T>::getItem(){
	// ���ʦͽ��ȡδ��ʼ�������ݣ�����ֹ���� 
	if(!haveValue){
		cout<<"No item present!"<<endl;
		exit(1);
	} 
	return item;
} 
// set���� 
template<class T>
void Store<T>::putItem(const T &x){
	// ��ʾ�ѳ�ʼ�� 
	haveValue = true;
	item = x;
}

int main(){
	// T�滻��int 
	Store<int> s1;
	s1.putItem(3);
	cout<<s1.getItem()<<endl; 
	
	// T�滻��Student
	Student g = {1000, 23};
	Store<Student> s2;
	s2.putItem(g);
	cout<<s2.getItem().id<<endl;
	
	// T�滻��double 
	Store<double> s3;
	cout<<s1.getItem()<<endl;
	
	return 0;
}

