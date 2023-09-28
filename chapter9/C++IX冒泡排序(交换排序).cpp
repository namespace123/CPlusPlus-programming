#include <cassert>
#include <iostream>
using namespace std;

template<class T>
void mySwap(T &x, T &y){
	T temp = x;
	x = y;
	y = temp;
} 

// √∞≈›≈≈–Ú£®æ≠µ‰∞Ê£© 
template<class T>
void bubbleSort(T a[], int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				mySwap(a[j], a[j+1]);
			}
		}
	}
}

// √∞≈›≈≈–Ú£®”≈ªØ∞Ê£© 
template<class T>
void bubbleSort2(T a[], int n){
	int i  = n - 1;
	int lastExchangeIndex;
	while(i > 0){
		lastExchangeIndex = 0; 
		for(int j = 0; j < i; j++){
			if(a[j] > a[j + 1]){
				mySwap(a[j], a[j+1]);
				lastExchangeIndex = j;
			}
		}
		i = lastExchangeIndex;
	}
}

int main(){
	int a[8] = {4, 5, 1, 9, 3, 8, 10, 2};
	int len = sizeof(a)/sizeof(a[0]);
	cout<<"the length of the array is "<<len<<endl;
	bubbleSort2(a, len);
	for(int i = 0; i < len; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}  
