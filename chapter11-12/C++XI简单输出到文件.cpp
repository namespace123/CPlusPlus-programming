#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    
    ofstream file("test.txt");
    file<<"已成功写入数据！";
    file.close();
    
    ifstream file1("test.txt");
    char ch;
    while(file1.get(ch)){
        cout<<ch;
    } 
    file1.close();

	return 0;
}

