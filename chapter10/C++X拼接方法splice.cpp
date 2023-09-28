#include<iostream>
#include<iterator>
#include<list>
using namespace std;

template<class T>
void exchange(list<T>& l1, class list<T>::iterator p1, list<T>& l2, class list<T>::iterator p2){
	list<T> temp;
	temp.splice(temp.begin(), l1, p1, l1.end());
	l1.splice(l1.end(), l2, p2, l2.end());
	l2.splice(l2.end(), temp, temp.begin(), temp.end());
}

typedef list<int> intlist; 

int main(){
	intlist a, b;
	
	for(int i = 0; i < 6; i++){
		a.push_back(i * 2 + 1);
		b.push_back(i * 3 + 2);
	}
	cout<<"a: ";
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;
	cout<<"b: ";
	copy(b.begin(), b.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;
	
	cout<<"after exchanging..."<<endl;
	intlist::iterator p1 = a.begin();
	advance(p1, 3);
	intlist::iterator p2 = b.begin();
	advance(p2, 4);
	exchange(a, p1, b, p2);
	cout<<"a: ";
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;
	cout<<"b: ";
	copy(b.begin(), b.end(), ostream_iterator<int>(cout, " "));
	cout<<endl;
	
	return 0;
} 
