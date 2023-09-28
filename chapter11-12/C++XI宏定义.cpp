#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
// 宏定义
#define D(a) T<<#a<<endl;a
ofstream T("output.out");   // 创建并打开一个文件，之后打印内容就输出到文件中了 

int main(){ 

    D(int i = 53;)
    D(float f = 4700113.141593;)
    char* s = "Is there any more?";
    
    D(T.setf(ios::unitbuf);)
    D(T.setf(ios::showbase);)
    D(T.setf(ios::uppercase);)
    D(T.setf(ios::showpos);)
    D(T<<i<<endl;)
    D(T.setf(ios::hex, ios::basefield);)
    D(T<<i<<endl;)
    D(T.unsetf(ios::uppercase););
    D(T.setf(ios::oct, ios::basefield);)
    D(T<<i<<endl;)
    D(T.unsetf(ios::showbase););
    D(T.setf(ios::dec, ios::basefield);)
    D(T.setf(ios::left, ios::adjustfield);)
    D(T.fill('0');)
    D(T<<"fill char: "<<T.fill()<<endl;) 
    D(T.width(8);)
    T<<i<<endl;
    D(T<<i<<endl;)
    
	return 0;
}

