#include<iostream>
using namespace std;

// ��� 
void swap1(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

// �Ӽ��� 
void swap2(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
    // ����һ�д��룺a = a + b - (b = a);
}

int main(){

    int a = 10;
    int b = 20;
    swap1(a, b);
    cout<<"a = "<<a<<", b = "<<b<<endl;
    swap2(a, b);
    cout<<"a = "<<a<<", b = "<<b<<endl;
	return 0;
}

