#include<iostream>
#include<string>
using namespace std;

class MyException{
    string message;
public:
    MyException(const string &message):message(message){
    }
    ~MyException(){
    }
    const string &getMessage() const{
          return message;
    }
};

class Demo{
public:
    Demo(){
        cout<<"Constructor of Demo"<<endl;
    }
    ~Demo(){
        cout<<"Destructor of Demo"<<endl;
    }
};

void func() throw(MyException){
    Demo d;
    cout<<"Throw MyException in func()"<<endl;
    throw MyException("Exception thrown by func()");
}
int main(){
    
    cout<<"In main function"<<endl;

    try{
        // 抛出异常时 会自动析构类对象，无需担心 
        func();
    }catch(MyException& e){
        cout<<"Caught an exception: "<<e.getMessage()<<endl;
    }
    cout<<"Resume the execution of main()"<<endl;
	return 0;
}

