#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
// multiset�������������ظ�Ԫ�ص�set 
    string str;
    multiset<string> strset;
    while(1){
        cout<<"�����ַ�����";
        cin>>str;
        if(str == "QUIT"){
            break;
        }
        int counter = strset.count(str);
        if(counter > 0){
            cout<<str<<"�ڼ������������ֹ�"<<counter<<"��"<<endl;
        }else{
            cout<<str<<"�ڼ�����û�г��ֹ�"<<endl;
        }
        strset.insert(str); 
    }
	return 0;
}

