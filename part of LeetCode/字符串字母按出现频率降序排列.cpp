#include<map>
#include<iostream>
#include<iterator>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

// map��valueֵ 
struct keys{
    int times;  // ���� 
    int index;  // ˳�� 
};

// �Զ���map���� 
struct cmpByKeys{
    bool operator()(const keys & a, const keys & b){
        return (a.times) > (b.times) || (a.times == b.times && a.index < b.index);
    }
};

class Solution {
public:
    
    string frequencySort(string s) {
        
        // ��struct��Ϊkey������ĸ��Ϊvalue������map
        //map�����Զ��������ʽ
        int len = s.length();
        map<keys, char, cmpByKeys> maps;
        map<char, int> maps_assist;
        map<keys, char>::iterator iter;
        map<keys, char>::iterator iter_temp;
        for(int i = 0; i < len; i++){
            char ch = s[i];
            // ����Ѵ��� 
            if(maps_assist.count(ch) != 0){
                for(iter = maps.begin(); iter != maps.end(); iter++){
                    if(iter->second == ch){
                        // map��key�ǲ������޸ĵģ�����ֻ��ɾ�������²��� 
                        struct keys k = iter->first;
                        k = {++k.times, k.index};
                        maps[k] = ch;
                        maps.erase(iter--);
                    }
                }
                // ��������� 
            }else{
                keys k3 = {1, i};
                maps[k3] = ch;
                maps_assist[ch] = 0;
            }
        }
        
        //���ͨ��������������ַ��� 
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








