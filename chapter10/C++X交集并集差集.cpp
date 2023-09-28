#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {3, 4, 5, 8, 9, 10};
    int N = sizeof(a) / sizeof(int);
    int M = sizeof(b) / sizeof(int);
    ostream_iterator<int> output(cout, " ");
    
    int size = N + M;
    int intersection[size]; 
    int *ptr = set_intersection(a, a + N, b, b + M, intersection);
    copy(intersection, ptr, output);
    cout<<endl;
    
    int unionset[size];
    ptr = set_union(a, a + N, b, b + M, unionset);
    copy(unionset, ptr, output);
    cout<<endl;
    
    int difference[size];
    ptr = set_difference(a, a + N, b, b + M, difference);
    copy(difference, ptr, output);
    cout<<endl;

	return 0;
}

