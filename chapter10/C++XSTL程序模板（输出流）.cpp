#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
	const int N = 5;
	// 容器 
	vector<int> s(N);
	for(int i = 0; i < N; i++){
		cin>>s[i];
	}
	// transform-算法：将容器中的数从头到尾依次进行处理后，传送到输出流中 
	// 算法通过迭代器间接操作容器中的数据
	// 算法和容器独立，增改算法或容器都不需要修改另一类的代码 
	// 前三个形参：迭代器 
	// negate 函数对象，用于求相反数 
	transform(s.begin(), s.end(), ostream_iterator<int>(cout, " "), negate<int>());
	cout<<endl;
	return 0;	
	
}

