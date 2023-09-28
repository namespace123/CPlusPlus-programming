#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

// my first source: 半暴力解决法，不是特别暴力，但近乎暴力了 
//class Solution {
//public:
//    // 判断是否回文(非回文返回 -1， 回文返回长度)
//    int isPalindromic(string s){
//        int len = s.length();
//        int begin = 0, end = len - 1;
//        while(begin < end){
//            if(s[begin] != s[end]){
//                return -1;
//            }
//            begin++;
//            end--;
//        }
//        return len;
//    }
//
//    // 双指针法: begin、end, 如果 s[begin] == s[end], 判断它们之间的子字符串是否是回文
//    // 如果 s[begin] != s[end], 把
//    string longestPalindrome(string s) {
//        string pstr = s.substr(0, 1);
//        int count = 1;
//        int len = s.length();
//        for(int j = 1; j < len; j++){
//            for(int i = 0; i < j - count + 1; i++){
//                if(s[i] == s[j]){
//                    string tempStr = s.substr(i, j - i + 1);
//                    int temp = isPalindromic(tempStr);
//                    if(temp != -1){
//                        pstr = tempStr;
//                        count = temp;
//                    }
//                }
//            }
//        }
//        return pstr;
//    }
//};


// greater: 中心扩展法（还有更牛逼的 Manacher 算法，等会儿再说） 
//class Solution {
//public:
//    // 根据中心扩展，修改临时回文子串的始终位置 
//    int isPalindromic(string s, int i, int j){
//        while(i >= 0 && j < s.length() && s[i] == s[j]){
//            i--;
//            j++;
//        }
//        return j - i - 1;
//    }
//
//    // 如果回文子串长度是奇数，则中心只有一个， 如果是偶数，则中心有两个
//    // 所以循环遍历，一个中心可取 n 个，两个中心可取 n - 1个，所以 加起来是 2n - 1 个中心 
//    string longestPalindrome(string s) {
//        // 用于记录最长回文子串的始终位置 
//        int start = 0; 
//        int count = 0;
//        for(int i = 0; i < s.length(); i++){
//            int len1 = isPalindromic(s, i, i);
//            int len2 = isPalindromic(s, i, i + 1);
//            int len = max(len1, len2);
//            if(len > count){
//                count = len;
//                start = i - (count - 1) / 2;
//            }
//            
//        } 
//        return s.substr(start, count);
//    }
//};

// Manacher 算法: 
// 在字符串的每个字符之间插入'#', 在首尾分别插入标志符号 ^ 和 $
// 需要掌握一点，一个回文子串中，根据该回文子串的中心点对称的两个点，中心扩展最大回文子串的长度是相等的（排除少许特殊情况之后） 
class Solution {
public:
    // 根据中心扩展，获取回文串的右边界 
    int getRight(string s, int i){
        i++;
        int j = i;
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            i--;
            j++;
        }
        return --j;
    }
    
    int isPalindromic(int i, int j){
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            i--;
            j++;
        }
        return j - i - 1;
    }

    
    string longestPalindrome(string s) {
        // 创建一个新的字符串 
        string newStr;
        newStr[0] = '^';
        int n = 0;
        for(int i = 0; i < s.length(); i++){
            newStr[++n] = '#';
            newStr[++n] = s[i];
        } 
        newStr[++n] = '#';
        newStr[++n] = '$';
        
        // 循环遍历，用 p 记录各个字符的中心扩展后的最大回文子串长度 
        vector<int> p(n);
        int center = 0;
        int right = 0;
        int len = s.length();
        for(int i = 0; i < len; i++){
            mirror_i = 2 * center - i;
            if(right > i){
                p[i] = min(right - i, p[mirror]);
            }else{
                p[i] = 0;
            }
            while(newStr.charAt(i - p[i] - 1)) == newStr.charAt(i + p[i] + 1){
                p[i]++;
            }
            if(i + p[i] > right){
                center = i;
                right = i + p[i];
            }
        } 
        return s.substr(start, count);
    }
};


int main(){

	Solution sol;
	cout<<sol.longestPalindrome("babad")<<endl;       // bab
	cout<<sol.longestPalindrome("cbbd")<<endl;        // bb
	cout<<sol.longestPalindrome("bbaabb")<<endl;       // bbaabb
	cout<<sol.longestPalindrome("abaabc")<<endl;       // baab
	cout<<sol.longestPalindrome("bcacbbcb")<<endl;     // bcacb
	cout<<sol.longestPalindrome("abacabc")<<endl;      // bacab
	return 0;
}

