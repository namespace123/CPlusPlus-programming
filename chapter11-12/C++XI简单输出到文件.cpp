#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    
    ofstream file("test.txt");
    file<<"�ѳɹ�д�����ݣ�";
    file.close();
    
    ifstream file1("test.txt");
    char ch;
    while(file1.get(ch)){
        cout<<ch;
    } 
    file1.close();

	return 0;
}

