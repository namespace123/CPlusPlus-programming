#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

// my first source: �뱩��������������ر����������������� 
//class Solution {
//public:
//    // �ж��Ƿ����(�ǻ��ķ��� -1�� ���ķ��س���)
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
//    // ˫ָ�뷨: begin��end, ��� s[begin] == s[end], �ж�����֮������ַ����Ƿ��ǻ���
//    // ��� s[begin] != s[end], ��
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


// greater: ������չ�������и�ţ�Ƶ� Manacher �㷨���Ȼ����˵�� 
//class Solution {
//public:
//    // ����������չ���޸���ʱ�����Ӵ���ʼ��λ�� 
//    int isPalindromic(string s, int i, int j){
//        while(i >= 0 && j < s.length() && s[i] == s[j]){
//            i--;
//            j++;
//        }
//        return j - i - 1;
//    }
//
//    // ��������Ӵ�������������������ֻ��һ���� �����ż����������������
//    // ����ѭ��������һ�����Ŀ�ȡ n �����������Ŀ�ȡ n - 1�������� �������� 2n - 1 ������ 
//    string longestPalindrome(string s) {
//        // ���ڼ�¼������Ӵ���ʼ��λ�� 
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

// Manacher �㷨: 
// ���ַ�����ÿ���ַ�֮�����'#', ����β�ֱ�����־���� ^ �� $
// ��Ҫ����һ�㣬һ�������Ӵ��У����ݸû����Ӵ������ĵ�ԳƵ������㣬������չ�������Ӵ��ĳ�������ȵģ��ų������������֮�� 
class Solution {
public:
    // ����������չ����ȡ���Ĵ����ұ߽� 
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
        // ����һ���µ��ַ��� 
        string newStr;
        newStr[0] = '^';
        int n = 0;
        for(int i = 0; i < s.length(); i++){
            newStr[++n] = '#';
            newStr[++n] = s[i];
        } 
        newStr[++n] = '#';
        newStr[++n] = '$';
        
        // ѭ���������� p ��¼�����ַ���������չ����������Ӵ����� 
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

