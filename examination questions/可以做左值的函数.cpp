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
	// ����ɹ��ض�x��y�нϴ���Ǹ���������+1���� 
	max(x, y)++;
	cout<<x<<", "<<y<<endl;  //  55�� 78 
}

