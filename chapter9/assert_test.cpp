# include <iostream>
# include <assert.h>
using namespace std;

int main(){
	int z = 20;
	assert(z < 25);
	cout<<"fighting!"<<endl;
	assert(z > 25); // 如果断言内的表达式不成立，则直接返回错误，省去了if else的麻烦 
	cout<<"not fighting!"<<endl;
	return 0;
}

