#include <cassert>
#include <iostream>
using namespace std;

template<class T>
void mySwap(T &x, T &y){
	T temp = x;
	x = y;
	y = temp;
} 

template<class T>
void selectionSort(T a[], int n){
	int i, j;
	int min;
	for(i = 0; i < n - 1; i++){
		min = i;
		for(j = i + 1; j < n; j++){
			if(a[min] > a[j]){
				min = j;
			}
		}
		if(min != i){
			mySwap(a[i], a[min]);
		}
	}
}

int main(){
	int a[8] = {4, 5, 1, 9, 3, 8, 10, 2};
	int len = sizeof(a)/sizeof(a[0]);
	cout<<"the length of the array is "<<len<<endl;
	selectionSort(a, len);
	for(int i = 0; i < len; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}  
