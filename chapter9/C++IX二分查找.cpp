#include <cassert>
#include <iostream>
using namespace std;

// ¶þ·Ö²éÕÒ 
template<class T>
int binSearch(const T list[], int n, const T &key){
	int low = 0;
	int high = n - 1;
	int mid;
	while(low <= high){
		mid = (low + high) / 2;
		if(list[mid] == key){
			return mid;
		}else if(list[mid] > key){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return -1;
}

int main(){
	int a[8] = {1, 4, 7, 8, 9, 10, 13};
	int len = sizeof(a)/sizeof(a[0]);
	cout<<"the length of the array is "<<len<<endl;
	cout<<binSearch(a, len, 8)<<endl;
}  
