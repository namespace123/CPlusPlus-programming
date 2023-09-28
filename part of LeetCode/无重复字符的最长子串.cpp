#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // ��������ָ�룬start, end ��end �� start ����
        // �ƶ� end , �Ƚ� end �� end��start֮�������Ԫ�أ����û���ظ�����ǰ�ƶ� end
        // ������ظ��� �� start ������ end �ظ���Ԫ�صĺ�һ��λ�ã�end ��λ�ò���
        // ��¼�� start ����ǰ��end �ľ���Ϊ count, ȡ max = max(max, count) , Ȼ��end������ǰ�ƶ����Ƚϣ�ѭ������
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

