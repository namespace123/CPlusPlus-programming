#include<iostream>
#include<fstream>
using namespace std;

//cmd中执行：   C++XImain传参.exe output.out 

int main(int argc, char* argv[]){
    
    ifstream in;
    // 打开第二个参数： 即文件  output.out 
    in.open(argv[1], ios::binary);
    // 第一个参数：即  C++XImain传参.exe
    cout<<argv[0]<<endl; 
    if(!in){
        cout<<"cannot open file."<<endl;
        return 1;
    }
    const int bsz = 1024;
    char buf[bsz];
    int line = 0;
    // getline一次所能读入的最大字符数：bsz 
    while(in.getline(buf, bsz)){
        // ++line 可以展示行号 
        cout<<++line<<":"<<buf<<endl;
    }
	return 0;
}

