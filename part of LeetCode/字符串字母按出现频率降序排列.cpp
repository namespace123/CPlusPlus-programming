#include<map>
#include<iostream>
#include<iterator>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

// map的value值 
struct keys{
    int times;  // 次数 
    int index;  // 顺序 
};

// 自定义map排序 
struct cmpByKeys{
    bool operator()(const keys & a, const keys & b){
        return (a.times) > (b.times) || (a.times == b.times && a.index < b.index);
    }
};

class Solution {
public:
    
    string frequencySort(string s) {
        
        // 把struct作为key，把字母作为value，存入map
        //map采用自定义的排序方式
        int len = s.length();
        map<keys, char, cmpByKeys> maps;
        map<char, int> maps_assist;
        map<keys, char>::iterator iter;
        map<keys, char>::iterator iter_temp;
        for(int i = 0; i < len; i++){
            char ch = s[i];
            // 如果已存在 
            if(maps_assist.count(ch) != 0){
                for(iter = maps.begin(); iter != maps.end(); iter++){
                    if(iter->second == ch){
                        // map的key是不可以修改的，所以只能删除再重新插入 
                        struct keys k = iter->first;
                        k = {++k.times, k.index};
                        maps[k] = ch;
                        maps.erase(iter--);
                    }
                }
                // 如果不存在 
            }else{
                keys k3 = {1, i};
                maps[k3] = ch;
                maps_assist[ch] = 0;
            }
        }
        
        //最后通过迭代器输出回字符串 
        int n = 0;
        for(iter = maps.begin(); iter != maps.end(); iter++){
            struct keys k = iter->first;
            for(int i = 0; i < k.times; i++){
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








