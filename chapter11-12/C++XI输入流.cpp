#include<iostream>
using namespace std;

int main(){
    
    char ch;
    while((ch = cin.get()) != EOF){
        cout.put(ch);
    }
    
    
    
    string line;
    // ��ȡ�����ַ�����ֱ��t���� 
    getline(cin, line, 't');
    cout<<line<<endl; 
	return 0;
}

