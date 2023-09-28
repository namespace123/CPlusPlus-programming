#include<iostream>
#include<algorithm>
#include<boost/bind.hpp>
using namespace std;

int main(){

    int a[] = {30, 90, 10, 40, 70, 50, 20, 80};
    const int N = sizeof(a) / sizeof(int);
    vector<int> v(a, a + N);
    vector<int>::iterator p = find_if(v.begin(), v.end(), bind(greater<int>(), _1, 40));
    if(p == v.end()){
        cout<<"no greater than 40"<<endl;
    }else{
        cout<<*p<<endl;
    }
	return 0;
}

