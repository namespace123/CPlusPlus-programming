#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

template<class T, class InputIterator, class OutputIterator>

void mySort(InputIterator first, InputIterator last, OutputIterator result){
	vector<T> s;
	// 通过输入迭代器将输入数据存入向量容器s中 
	for(;first != last; ++first){
		s.push_back(*first);
	}
	// 对s进行排序，sort函数的参数必须是随机访问迭代器 
	sort(s.begin(), s.end());
	// 将s序列通过输出迭代器输出 
	copy(s.begin(), s.end(), result);
} 
int main(){
	double a[5] = {1.2, 2.4, 0.8, 3.3, 3.2};
	mySort<double>(a, a+5, ostream_iterator<double>(cout, " "));
	cout<<endl;
	mySort<int>(istream_iterator<int>(cin), istream_iterator<int>(), 
		ostream_iterator<int>(cout, " "));
	cout<<endl;
	return 0;
}

