#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<list>
#include<ctime>
using namespace std;

int random(){
    return rand() % 10;
}

int main(){
    /* ��ǰʱ���Ӧ��intֵΪ���������㣬����ÿ�����г���
    ������㲻ͬ�ſ��Եõ���ͬ���������time����������1970��1��1��00:00:00�����������
    �������һ�������������洢���������time()�ᵼ���﷨����time(0)��ʾ���������д洢*/
    srand((int)time(0));
    list<int> l(20);
    generate(l.begin(), l.end(), random);
    copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
    cout<<endl; 
    
    // ��ʱ2�� 
    _sleep(2 * 1000);
    
    vector<int> V(10);
    generate(V.begin(), V.end(), rand);
    copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));
	return 0;
}

