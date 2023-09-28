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
    /* 当前时间对应的int值为随机序列起点，这样每次运行程序，
    由于起点不同才可以得到不同的随机数，time函数给出从1970年1月1日00:00:00至今的秒数，
    它必须带一个参数，用来存储这个秒数，time()会导致语法错误，time(0)表示秒数不进行存储*/
    srand((int)time(0));
    list<int> l(20);
    generate(l.begin(), l.end(), random);
    copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
    cout<<endl; 
    
    // 延时2秒 
    _sleep(2 * 1000);
    
    vector<int> V(10);
    generate(V.begin(), V.end(), rand);
    copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));
	return 0;
}

