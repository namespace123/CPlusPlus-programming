#include<iostream>
#include<sstream>
#include<string>
using namespace std;

template <class T>
inline string toString(const T &v){
    ostringstream os;  // �����ַ�������� 
    os<<v;  // ������v��ֵд���ַ����� 
    return os.str();  // ������������ɵ��ַ��� 
} 

int main(){

    string str1 = toString(5);
    cout<<str1<<endl;
    string str2 = toString(1.2);
    cout<<str2<<endl; 
	return 0;
}

