#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

template<class T, class InputIterator, class OutputIterator>

void mySort(InputIterator first, InputIterator last, OutputIterator result){
	vector<T> s;
	// ͨ��������������������ݴ�����������s�� 
	for(;first != last; ++first){
		s.push_back(*first);
	}
	// ��s��������sort�����Ĳ���������������ʵ����� 
	sort(s.begin(), s.end());
	// ��s����ͨ�������������� 
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

