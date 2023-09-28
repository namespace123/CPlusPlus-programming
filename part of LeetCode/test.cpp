#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int max(int a, int b, int c, int d){
        int max = a;
        if(b > max){
            max = b;
        }
        if(c > max){
            max = c;
        }
        if(d > max){
            max = d;
        }
        return max;
    }
    
    int maximumProduct(vector<int>& nums) {

        int len = nums.size();
        long long res;
        // 长度=3 直接乘 
        if(len == 3){
            res = nums[len - 1] * nums[len - 2] * nums[len - 3];
        }else{
            // 排序 
            sort(nums.begin(), nums.end());
            if(nums[len - 1] > )
            res = max(nums[len - 1] * nums[len - 2] * nums[len - 3], nums[len - 1] * nums[len - 2] * nums[0], 
                nums[len - 1] * nums[0] * nums[1], nums[0] * nums[1] * nums[2]);
            if(nums[len - 1] >= 0 && nums[len - 2] <= 0 && nums[1] == 0){
                return 0;
            }
        }
        return res;
    }
};

int main(){

    vector<int> v {722,634,-504,-379,163,-613,-842,-578,750,951,-158,30,-238,-392,-487,-797,-157,-374,999,-5,
    -521,-879,-858,382,626,803,-347,903,-205,57,-342,186,-736,17,83,726,-960,343,-984,937,-758,-122,577,-595,-544,
    -559,903,-183,192,825,368,-674,57,-959,884,29,-681,-339,582,969,-95,-455,-275,205,-548,79,258,35,233,203,20,
    -936,878,-868,-458,-882,867,-664,-892,-687,322,844,-745,447,-909,-586,69,-88,88,445,-553,-666,130,-640,-918,-7,-420,-368,250,-786}; // 943695360 
    Solution sol;
    cout<<sol.maximumProduct(v)<<endl;
	return 0;
}

