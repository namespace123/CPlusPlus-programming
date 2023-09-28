#include<iostream>
using namespace std;

// 异常抽象类 
class Exception{
public:
    Exception(){
    }
    virtual ~Exception(){
    }
    virtual void PrintError() = 0;
}; 

// 内存不足异常类 
class OutOfMemory: public Exception{
public:
    OutOfMemory(){
    }
    ~OutOfMemory(){
    }
    virtual void PrintError();
};
void OutOfMemory::PrintError(){
    cout<<"Out of Memory!!\n";
}

// 响应输入的数不在指定范围内 
class RangeError: public Exception{
    unsigned long BadNum;
public:
    RangeError(unsigned long number){
        BadNum = number;
    }
    ~RangeError(){
    }
    virtual void PrintError();
    virtual unsigned long GetNumber(){
        return BadNum;
    }
    virtual void setNumber(unsigned long number){
        BadNum = number;
    }
};
void RangeError::PrintError(){
    cout<<"Number out of range. You used "<<GetNumber()<<"!\n";
}

void fn1();
unsigned int * fn2();
void fn3(unsigned int *);

int main(){
    
    try{
        fn1();
    }catch(Exception& theException){
        theException.PrintError();
    }
	return 0;
}

// 分配一个整型空间 
unsigned int * fn2(){
    unsigned int * n = new unsigned int;
    if(n == 0){
        throw OutOfMemory();
    }
    return n;
}

// 分配一个整型空间，然后输入赋值，打印 
void fn1(){
    unsigned int *p = fn2();
    fn3(p);
    cout<<"The number is: "<<*p<<endl;
    delete p;
}

// 输入0-1000之间的数字 
void fn3(unsigned int *p){
    long Number;
    cout<<"Enter an integer(0~~1000): ";
    cin>>Number;
    
    if(Number > 1000 || Number < 0){
        throw RangeError(Number);
    }
    *p = Number;
}
