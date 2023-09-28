#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // 设置两个指针，start, end ；end 在 start 后面
        // 移动 end , 比较 end 与 end和start之间的所有元素，如果没有重复就往前移动 end
        // 如果有重复， 则 start 跳到与 end 重复的元素的后一个位置，end 的位置不变
        // 记录下 start 跳动前与end 的距离为 count, 取 max = max(max, count) , 然后end继续往前移动，比较，循环往复
        int max1 = 0;
        int len = s.length();
        if(len == 0){
            return 0;
        }else if(len == 1){
            return 1;
        }
        int start = 0, end = 1;
        while(end < len){
            int i = start;
            for(; i < end; i++){
                if(s[i] == s[end]){
                    max1 = max(max1, end - start);
                    break;
                }
            }
            if(i == end){
                end++;
            }else{
                start = i + 1;
            }
        } 
        if(end == len){
            max1 = max(max1, end - start);
        }
        return max1;
    }
};

int main(){
    
    Solution sol;
    cout<<sol.lengthOfLongestSubstring("abcabcbb")<<endl;
    cout<<sol.lengthOfLongestSubstring("bbbbb")<<endl;
    cout<<sol.lengthOfLongestSubstring("pwwkew")<<endl;
    cout<<sol.lengthOfLongestSubstring("au")<<endl;
    cout<<sol.lengthOfLongestSubstring("asdfg")<<endl;
    cout<<sol.lengthOfLongestSubstring("asdfgg")<<endl;
    cout<<sol.lengthOfLongestSubstring("aaadasghjkl")<<endl;
	return 0;
}

