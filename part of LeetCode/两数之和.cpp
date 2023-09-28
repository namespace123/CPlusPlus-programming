#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

// my ： 半暴力法 
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//
//        vector<int> res;
//        int len = nums.size();
//        multimap<int, int> maps;
//        for(int i = 0; i < len; i++){
//            maps.insert(pair<int, int>(nums[i], i));
//        }
//        map<int, int>::iterator iter1 = maps.begin();
//        map<int, int>::reverse_iterator iter2 = maps.rbegin();
//        for(; iter1 != maps.end(); iter1++){
//            for(; iter2 != maps.rend(); iter2++){
//                if(iter1->first + iter2->first == target){
//                    res.push_back(iter1->second);
//                    res.push_back(iter2->second);
//                    return res;
//                }else if(iter1->first + iter2->first < target){
//                    break;
//                }
//            }
//        }
//        return res;
//    }
//};

// greater：二次哈希法 
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//
//        vector<int> res;
//        int len = nums.size();
//        multimap<int, int> maps;
//        for(int i = 0; i < len; i++){
//            maps.insert(pair<int, int>(nums[i], i));
//        }
//        // 此处直接寻找匹配的 另一个数 （节约了部分时间） 
//        map<int, int>::iterator iter1 = maps.begin();
//        for(; iter1 != maps.end(); iter1++){
//            int a = iter1->first;
//            int b = target - a;
//            if(a != b){
//                if(maps.count(b) > 0){
//                    res.push_back(iter1->second);
//                    res.push_back(maps.find(b)->second);
//                    return res;
//                }
//            }else{
//                multimap<int,int>::iterator iter = maps.find(b);
//                for(;iter != maps.end(); iter++){
//                    if(iter->second != iter1->second){
//                        res.push_back(iter1->second);
//                        res.push_back(iter->second);
//                        return res;
//                    }
//                }
//            }
//        }
//        return res;
//    }
//};


#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashtable;
        for(int i=0; i < nums.size(); i++){
            
			auto iter = hashtable.find(target - nums[i]);
            if(iter != hashtable.end()){
                return {i, iter->second} ;
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};


int main(){

//    vector<int> nums{2, 7, 11, 15};   // 9
//    vector<int> nums{3,3};   // 6
//    vector<int> nums{3, 2, 3};   // 6
    vector<int> nums{2,7,11,15};
//      vector<int> nums{3, 2, 1};   // 3
//      vector<int> nums{3, 2, 4};    // 6
    Solution sol;
    vector<int> res = sol.twoSum(nums, 9);
    for(int a: res){
     cout<<a<<" ";
    }
    cout<<endl;
    
	return 0;
}

