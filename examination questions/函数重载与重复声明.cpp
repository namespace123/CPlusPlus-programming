#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// .��������������Ĳ�������ֻ��ȱʡʵ�β�ͬ��ڶ�����������Ϊ��һ�����ظ�����
int max( int *ia, int sz ){
    return 0; 
} 
int max( int *, int = 10 ){
    return 1;
} 

int main(){
    
    int a = 10; 
    int *p = &a;
    int q = 100;
	cout<<max(p, q)<<endl;
	return 0;
}

