#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long int sum = 0;
        while(x != 0){
            sum = sum * 10 + x % 10;
            x /= 10;
        }
        if(sum > INT_MAX || sum < INT_MIN){
            return 0;
        }
        return sum;
    }
};
int main(){
    
    Solution sol;
    cout<<sol.reverse(1534236469)<<endl;
    cout<<INT_MAX<<endl;
	return 0;
}

