#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<char, int> maps;
    maps['c'] = 2;
    maps['b'] = 1;
    maps['a'] = 4;
    maps['e'] = 10;
    maps['d'] = 20;
    unordered_map<char, int>::iterator iter = maps.begin();
    for(; iter != maps.end(); iter++){
        cout<<iter->first<<", "<<iter->second<<endl; 
    }
    
	return 0;
}

