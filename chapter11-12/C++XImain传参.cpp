#include<iostream>
#include<fstream>
using namespace std;

//cmd��ִ�У�   C++XImain����.exe output.out 

int main(int argc, char* argv[]){
    
    ifstream in;
    // �򿪵ڶ��������� ���ļ�  output.out 
    in.open(argv[1], ios::binary);
    // ��һ����������  C++XImain����.exe
    cout<<argv[0]<<endl; 
    if(!in){
        cout<<"cannot open file."<<endl;
        return 1;
    }
    const int bsz = 1024;
    char buf[bsz];
    int line = 0;
    // getlineһ�����ܶ��������ַ�����bsz 
    while(in.getline(buf, bsz)){
        // ++line ����չʾ�к� 
        cout<<++line<<":"<<buf<<endl;
    }
	return 0;
}

