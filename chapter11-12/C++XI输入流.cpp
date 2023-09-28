#include<iostream>
using namespace std;

int main(){
    
    char ch;
    while((ch = cin.get()) != EOF){
        cout.put(ch);
    }
    
    
    
    string line;
    // 读取整个字符串，直到t结束 
    getline(cin, line, 't');
    cout<<line<<endl; 
	return 0;
}

