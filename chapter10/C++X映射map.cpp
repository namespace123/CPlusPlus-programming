#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

    string str;
    map<string, int> amap;
    while(1){
        cout<<"�����ַ�����";
        cin>>str;
        if(str == "QUIT"){
            break;
        }
        int counter = amap.count(str);
        
        if(counter > 0){
            cout<<str<<"��ӳ�����������ֹ�"<<counter<<"��"<<endl;
            cout<<str<<"���Ѿ������"<<amap[str]<<"��"<<endl;
            amap.insert(map<string, int>::value_type(str, ++amap[str]));
        }else{
            cout<<str<<"��ӳ����û�г��ֹ�"<<endl;
//            amap.insert(make_pair(str, 1));
            amap.insert(map<string, int>::value_type(str, 1));
        }
    }
	return 0;
}

