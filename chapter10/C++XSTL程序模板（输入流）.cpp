#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

double square(double x){
	return x * x;
}

int main(){
	// istream_iterator<double>() 调用默认构造函数，表示输入流的结束 
	transform(istream_iterator<double>(cin), istream_iterator<double>(), ostream_iterator<double>(cout, "\t"), square);
	cout<<endl;
	return 0;
} 
