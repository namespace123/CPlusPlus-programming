#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

    string str;
    map<string, int> amap;
    while(1){
        cout<<"输入字符串：";
        cin>>str;
        if(str == "QUIT"){
            break;
        }
        int counter = amap.count(str);
        
        if(counter > 0){
            cout<<str<<"在映射中曾经出现过"<<counter<<"次"<<endl;
            cout<<str<<"您已经输入过"<<amap[str]<<"次"<<endl;
            amap.insert(map<string, int>::value_type(str, ++amap[str]));
        }else{
            cout<<str<<"在映射中没有出现过"<<endl;
//            amap.insert(make_pair(str, 1));
            amap.insert(map<string, int>::value_type(str, 1));
        }
    }
	return 0;
}

