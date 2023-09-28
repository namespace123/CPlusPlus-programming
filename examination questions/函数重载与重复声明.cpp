#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// .如果在两个函数的参数表中只有缺省实参不同则第二个声明被视为第一个的重复声明
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

