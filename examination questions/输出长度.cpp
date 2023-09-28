#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    char str[] = "world";
    // 计算char数组时，连带最后的'\0'长度也要算上 
    cout << sizeof(str) << ": ";  
    /* 大多数类型指针和原类型sizeof一样，但是char不一样，
       32位和64位的char都是1字节，
       32位 *char 是4字节，64位 *char 是8字节 
    */ 
	char *p = str; 
	cout << sizeof(p) << ": ";  
	char i = 10; 
	cout << sizeof(i) << ": ";  
	// sizeof(void*)和编译器目标平台的内存空间有关
	void *pp = malloc(10);
    cout << sizeof(pp) << endl;
    cout << sizeof(void*) << endl;
    
    cout<<~((int)0)<<endl;  // -1
    cout<<~0<<endl;  // -1
    for (int i = 0; i< ~((int)0); i++);
    
    
    int j = 5, b = 7; 
    // ++优先级比+优先级高 
    cout << (j+++b) <<endl; 
}

