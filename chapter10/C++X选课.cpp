#include<iostream>
#include<string>
#include<utility>
#include<boost/unordered_map.hpp> 
using namespace std;
using namespace boost;

int main(){
    unordered_map<string, int> courses;
    courses.insert(make_pair("CSAPP", 3));
    courses.insert(make_pair("C++", 2));
    courses.insert(make_pair("CSARCH", 4));
    courses.insert(make_pair("COMPILER", 4));
    courses.insert(make_pair("OS", 5));
    
    int n = 3;
    int sum = 0;
    while(n > 0){
        string name;
        cin>>name;
        unordered_map<string, int>::iterator iter = courses.find(name);
        if(iter == courses.end()){
            cout<<name<<" is not available"<<endl;
        }else{
            sum += iter->second;
            courses.erase(iter);
            n--;
        }
    }
	return 0;
}

