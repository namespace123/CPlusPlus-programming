#include<iostream>
using namespace std;

// 异或法 
void swap1(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

// 加减法 
void swap2(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
    // 或者一行代码：a = a + b - (b = a);
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

