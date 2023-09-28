#include <iostream>
#include<vector>
using namespace std;

template <typename T>  // 也可用 template <class T>
// 展示容器的前count个元素 
void display(const T array, int count){
	for(int i = 0; i < count; i++){
		cout<<array[i]<<"\t";
	}
	cout<<endl;
}

int main()
{
	int a[] = {1, 2, 3};
	double b[] = {2.6, 5.8};
	vector<int> c(a, a+3);
	outputArray(a, 3);
	outputArray(b, 2);
	outputArray(c, 2);
    return 0;
}
