#include<map>
#include<iostream>
#include<iterator>
#include<string>
#include<cstring>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    
    string frequencySort(string s) {
        
        int len = s.length();
        
        // 先用 unordered_map 来计数
        unordered_map<char, int> umap;
        for(int i = 0; i < len; i++){
            char ch = s[i];
            if(umap.count(ch) == 0){
                umap[ch] = 1;
            }else{
                umap[ch] = umap[ch] + 1;
            }
        }
        // 再用multimap来转换原unordered_map的 key与value位置，并进行排序
        unordered_map<char, int>::iterator iter = umap.begin();
        multimap<int, char> mmap;
        for(; iter != umap.end(); iter++){
            int values = iter->second;
            mmap[values] = iter->first;
        }
        
        // 最后输出  
        int n = 0;
        multimap<int, char>::iterator iter2 = mmap.begin();
        for(; iter2 != mmap.end(); iter2++){
            for(int i = 0; i < iter->first; i++){
                s[n++] = iter->second;
            }
        }
        return s;
    }
};

int main(){
    
    Solution sol;
    cout<<sol.frequencySort("tree")<<endl;
    cout<<sol.frequencySort("cccaaa")<<endl;
    cout<<sol.frequencySort("aaacccbbb")<<endl;
    cout<<sol.frequencySort("Aabb")<<endl;
    cout<<sol.frequencySort("cacaca")<<endl;
    return 0;
}








