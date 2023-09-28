#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> people(num_people);
        int n = 0;
        int sum = 0;
        int m = 0;
        for(int i = 0; ; i++){
            if(sum == candies){
                break;
            }else{
                if(sum + n + 1 > candies){
                    m = candies - sum;
                }else{
                    n++;
                    m = n;
                }
            }
            int index = i % num_people;
            people[index] = people[index] + m;
            sum += m;
        }
        return people;
    }
};

int main(){
    
    Solution sol;
    vector<int> v = sol.distributeCandies(7, 4); 
    for(auto a : v){
        cout<<a<<" ";
    } 
    cout<<endl;

	return 0;
}

