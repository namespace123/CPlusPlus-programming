#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

// չʾvector����Ԫ�أ�˳����ϰ��ģ��ʹ�ã� 
template<class T>
void show_all(const vector<T> &v){  // ������&������ǳ���������Խ�ʡ�ռ� 
	// ��ȡͷ��βԪ�ص����� 
	copy(v.begin(), v.end(), ostream_iterator<T>(cout, " "));
}

int main(){
	
	int a[] = {1, 2, 3, 4, 5};
	// �󳤶� 
	const int N = sizeof(a) / sizeof(int);
	// vector��ʼ�� 
	vector<int> v(a, a+N); 
	show_all(v);
	// ���βԪ�� 
	v.push_back(6);
	// ɾ��βԪ�� 
	v.pop_back();
//	v.insert(0, 0);
	

    return 0;
}

