#include<iostream>
#include<sstream> 
using namespace std;

template<class T>
inline T fromString(const string &str){
    istringstream is(str); // 创建字符串输入流 
    T v;
    is >> v;   // 从字符串输入流中读取变量v 
    return v;
}

int main(){

    int v1 = fromString<int>("5");
    cout<<v1<<endl;
    double v2 = fromString<double>("1.2");
    cout<<v2<<endl;
	return 0;
}

