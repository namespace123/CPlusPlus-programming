#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    char str[] = "world";
    // ����char����ʱ����������'\0'����ҲҪ���� 
    cout << sizeof(str) << ": ";  
    /* ���������ָ���ԭ����sizeofһ��������char��һ����
       32λ��64λ��char����1�ֽڣ�
       32λ *char ��4�ֽڣ�64λ *char ��8�ֽ� 
    */ 
	char *p = str; 
	cout << sizeof(p) << ": ";  
	char i = 10; 
	cout << sizeof(i) << ": ";  
	// sizeof(void*)�ͱ�����Ŀ��ƽ̨���ڴ�ռ��й�
	void *pp = malloc(10);
    cout << sizeof(pp) << endl;
    cout << sizeof(void*) << endl;
    
    cout<<~((int)0)<<endl;  // -1
    cout<<~0<<endl;  // -1
    for (int i = 0; i< ~((int)0); i++);
    
    
    int j = 5, b = 7; 
    // ++���ȼ���+���ȼ��� 
    cout << (j+++b) <<endl; 
}

