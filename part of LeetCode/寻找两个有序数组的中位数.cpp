#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // 设置四个指针 start1 = 0, end1 = nums1.size(), start2 = 0, end2 = nums2.size()
        int len1 = nums1.size();
        int len2 = nums2.size();
        int start1 = 0, start2 = 0;
        int end1 = len1 - 1, end2 = len2 - 1;
        int i, j;
        while(start1 <= end1 || start2 <= end2){
            if(start1 <= end1 && start2 <= end2){
                if(nums1[start1] <= nums2[start2]){
                    i = nums1[start1];
                    start1++;
                }else{
                    i = nums2[start2];
                    start2++;
                }
                if(nums1[end1] >= nums2[end2]){
                    j = nums1[end1];
                    end1--;
                }else{
                    j = nums2[end2];
                    end2--;
                }
            }else if(start1 <= end1){
                i = nums1[start1];
                j = nums1[end1];
                start1++;
                end1--;
            }else if(start2 <= end2){
                i = nums2[start2];
                j = nums2[end2];
                start2++;
                end2--;
            }
        }
        if(i == j){
            return (double)i;
        }else{
            return ((double)i + (double)j)/2;
        }
    }
};

int main(){
    
      Solution sol;
      vector<int> v1 = {1, 3, 5};
      vector<int> v2 = {2, 3, 4};
//      vector<int> v1 = {1, 3, 5};
//      vector<int> v2 = {2, 3, 4, 4, 5, 5};
//      vector<int> v1 = {1, 3, 5};
//      vector<int> v2 = {2};
//        vector<int> v1 = {1};
//        vector<int> v2 = {2};
//    vector<int> v1;
//    vector<int> v2 = {3, 4};
//    vector<int> v1 = {1};
//    vector<int> v2 = {3, 4};
//    vector<int> v1 = {1, 2};
//    vector<int> v2 = {3, 4};
    cout<<sol.findMedianSortedArrays(v1, v2)<<endl;
	return 0;
}

