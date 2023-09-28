#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

double max(float x, float y){
	if(abs(x - y) < 1e-10) return x;  // 1 * pow(10, -10)
	else if(x >= y) return x;
	else return y;
}

int main(){
	
	cout<<max(1.111111, 1.111112)<<endl;
	return 0;
}

