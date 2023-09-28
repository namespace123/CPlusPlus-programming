#include<iostream>
using namespace std;

// �쳣������ 
class Exception{
public:
    Exception(){
    }
    virtual ~Exception(){
    }
    virtual void PrintError() = 0;
}; 

// �ڴ治���쳣�� 
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

// ��Ӧ�����������ָ����Χ�� 
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

// ����һ�����Ϳռ� 
unsigned int * fn2(){
    unsigned int * n = new unsigned int;
    if(n == 0){
        throw OutOfMemory();
    }
    return n;
}

// ����һ�����Ϳռ䣬Ȼ�����븳ֵ����ӡ 
void fn1(){
    unsigned int *p = fn2();
    fn3(p);
    cout<<"The number is: "<<*p<<endl;
    delete p;
}

// ����0-1000֮������� 
void fn3(unsigned int *p){
    long Number;
    cout<<"Enter an integer(0~~1000): ";
    cin>>Number;
    
    if(Number > 1000 || Number < 0){
        throw RangeError(Number);
    }
    *p = Number;
}
