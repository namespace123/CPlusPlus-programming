#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int & max(int &x, int &y){
    return x > y ? x : y;
} 

int main(){

	int x = 55;
	int y = 77;
	// 这里成功地对x，y中较大的那个数进行了+1操作 
	max(x, y)++;
	cout<<x<<", "<<y<<endl;  //  55， 78 
}

