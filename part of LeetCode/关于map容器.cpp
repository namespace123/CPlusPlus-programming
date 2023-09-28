#include<map>
#include<iostream>
#include<iterator>
#include<string>
using namespace std;


class MapSum {
private:
    map<string, int> maps;
public:
    MapSum() {
    }
    
    void insert(string key, int val) {
        maps[key] = val; 
    }
    
    int sum(string prefix) {
        int len = prefix.length();
        int i;
        int sum = 0;
        map<string, int>::iterator iter;
        for(iter = maps.begin(); iter != maps.end(); iter++){
            string s = iter->first;
            for(i = 0; i < len; i++){
                if(prefix[i] != s[i]){
                    break;
                }
            }
            if(i == len){
                sum += iter->second; 
            }
        }
        return sum; 
    }
};

int main(){
    MapSum* obj = new MapSum(); 
    obj->insert("abc",25);
    obj->insert("abcde",2);
    obj->insert("adec",3);
    obj->insert("adecg",4);
    int n = obj->sum("a");
    cout<<n<<endl;
    return 0;
}


