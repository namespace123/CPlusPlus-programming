#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;

int five_times(int x){
    return 5 * x;
}

int multiply(int x, int y){
    return y * x;
}

int main(){

    int a[] = {3, 6, 8, 2, 5};
    vector<int> v(a, a + 5);
    transform(v.begin(), v.end(), v.begin(), five_times);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    
    int b[] = {1, 3, 5, 5, 8};
    vector<int> v2(b, b + 5);
    transform(v.begin(), v.end(), v2.begin(), v2.begin(), multiply);
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
	return 0;
}

