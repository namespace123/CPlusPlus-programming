#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque<int> deq;
	deq.push_back(3);
	deq.push_back(5);
	deq.push_back(1);
	deq.push_back(6);
	deq.push_back(7);
	
	while(!deq.empty()){
		cout<<"È¡³öÔªËØ"<<deq.front()<<endl;
		deq.pop_front();
	}
    return 0;
}

