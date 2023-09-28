#include<iostream>
using namespace std;

class A {
public:
	virtual void func1();
	void func2(); 
};
 
class B: public A {
public:
	void func1() {
		cout << "fun1 in class B" << endl;
	}
	void func2() {
        cout << "fun2 in class B" << endl;
	}
};
class C: public B{
public:
    void func1() {
		cout << "fun1 in class C" << endl;
	}
	void func2() {
        cout << "fun2 in class C" << endl;
	}
};

int main(){
	
	C cc;
	A *aa = &cc;
	aa->func1();  //  fun1 in class C
	B *bb = &cc;
	// ��Ȼ�����func1�����麯������Ϊ��ʵ�ֵĳ�����Ҳ����ģ���func2�����麯������Ϊ��ʵ�ֵĳ������Ͳ������ 
	bb->func1();  //  fun1 in class C
	bb->func2();  //  fun1 in class B
	return 0;
}

