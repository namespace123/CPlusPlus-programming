#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
	const int N = 5;
	// ���� 
	vector<int> s(N);
	for(int i = 0; i < N; i++){
		cin>>s[i];
	}
	// transform-�㷨���������е�����ͷ��β���ν��д���󣬴��͵�������� 
	// �㷨ͨ����������Ӳ��������е�����
	// �㷨�����������������㷨������������Ҫ�޸���һ��Ĵ��� 
	// ǰ�����βΣ������� 
	// negate ���������������෴�� 
	transform(s.begin(), s.end(), ostream_iterator<int>(cout, " "), negate<int>());
	cout<<endl;
	return 0;	
	
}

