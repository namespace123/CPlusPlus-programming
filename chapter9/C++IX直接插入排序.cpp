#include <cassert>
#include <iostream>
using namespace std;

template<class T>
void insertionSort(T a[], int n){
	int i, j;
	T temp;
	for(i = 1; i < n; i++){
		j = i;
		T temp = a[i];
		while(j > 0 && temp < a[j -1]){
			a[j] = a[j - 1];
			j--;
		}
		a[j] = temp;
	}
}

int main(){
	int a[8] = {4, 5, 1, 9, 3, 8, 10, 2};
	int len = sizeof(a)/sizeof(a[0]);
	cout<<"the length of the array is "<<len<<endl;
	insertionSort(a, len);
	for(int i = 0; i < len; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
} 
