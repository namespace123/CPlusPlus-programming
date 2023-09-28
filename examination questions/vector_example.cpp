#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

// 展示vector所有元素（顺便练习下模板使用） 
template<class T>
void show_all(const vector<T> &v){  // 传引用&，采用浅拷贝，可以节省空间 
	// 获取头、尾元素迭代器 
	copy(v.begin(), v.end(), ostream_iterator<T>(cout, " "));
}

int main(){
	
	int a[] = {1, 2, 3, 4, 5};
	// 求长度 
	const int N = sizeof(a) / sizeof(int);
	// vector初始化 
	vector<int> v(a, a+N); 
	show_all(v);
	// 添加尾元素 
	v.push_back(6);
	// 删除尾元素 
	v.pop_back();
//	v.insert(0, 0);
	

    return 0;
}

