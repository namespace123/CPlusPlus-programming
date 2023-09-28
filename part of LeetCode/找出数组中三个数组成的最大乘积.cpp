#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int len = nums.size();
        int res;
        // 长度=3 直接乘 
        if(len == 3){
            return nums[len - 1] * nums[len - 2] * nums[len - 3];
        }
        // 如果最后面是两个负数，就要比较乘积大小，如果不是两个负数，那就直接返回后3个数乘积 
        // 排序 
//        sort(nums.begin(), nums.end());
          int min1 = INT_MAX, min2 = INT_MAX, max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
          for(int i = 0; i < nums.size(); i++){
              int a = nums[i];
              int temp = 0;
              
              if(a <= min1){
                  min2 = min1;
                  min1 = a;
              }else if(a < min2){
                  min2 = a;
              }
              
              if(a >= max1){
                  max3 = max2;
                  max2 = max1;
                  max1 = a;
              }else if(a >= max2){
                  max3 = max2;
                  max2 = a;
              }else if(a > max3){
                  max3 = a;
              }
              cout<<min1<<" "<<min2<<" "<<max3<<" "<<max2<<" "<<max1<<endl;
          } 
        
        if(min1 < 0 && min2 < 0){
            return max(max1 * max2 * max3, min1 * min2 * max1);
        }else{
            return max1 * max2 * max3;
        }
    }
};

int main(){
    
    vector<int> v{INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX};
//    vector<int> v{6,2,6,5,1,2};
    
//    vector<int> v{-4,-3,-2,-1,60};

//    vector<int> v {722,634,-504,-379,163,-613,-842,-578,750,951,-158,30,-238,-392,-487,-797,-157,-374,999,-5,
//    -521,-879,-858,382,626,803,-347,903,-205,57,-342,186,-736,17,83,726,-960,343,-984,937,-758,-122,577,-595,-544,
//    -559,903,-183,192,825,368,-674,57,-959,884,29,-681,-339,582,969,-95,-455,-275,205,-548,79,258,35,233,203,20,
//    -936,878,-868,-458,-882,867,-664,-892,-687,322,844,-745,447,-909,-586,69,-88,88,445,-553,-666,130,-640,-918,-7,-420,-368,250,-786}; // 943695360 
    Solution sol;
    cout<<sol.maximumProduct(v)<<endl;
	return 0;
}

