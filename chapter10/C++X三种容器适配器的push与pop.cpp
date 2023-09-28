#include<iostream>
#include<iterator>
#include<typeinfo>
#include<algorithm>
#include<functional>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<stack>
using namespace std;

int main(){
    
    int a[] = {5, 1, 4, 6};
    stack<int> s;
    queue<int> q;
    priority_queue<int> p;
    
    for(int i = 0; i < 4; i++){
        s.push(a[i]);
        q.push(a[i]);
        p.push(a[i]);
    } 
    for(int i = 0; i < 2; i++){
        cout<<"stack: "<<s.top()<<endl;
        cout<<"queue: "<<q.front()<<endl;
        cout<<"priority_queue: "<<p.top()<<endl;
        s.pop();
        q.pop();
        p.pop(); 
    } 
    int b[] = {2, 3};
    for(int i = 0; i < 2; i++){
        s.push(b[i]);
        q.push(b[i]);
        p.push(b[i]);
    } 
    for(int i = 0; i < 2; i++){
        cout<<"stack: "<<s.top()<<endl;
        cout<<"queue: "<<q.front()<<endl;
        cout<<"priority_queue: "<<p.top()<<endl;
        s.pop();
        q.pop();
        p.pop(); 
    } 
	return 0;
}

