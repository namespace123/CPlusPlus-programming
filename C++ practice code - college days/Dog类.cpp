#include<iostream>
using namespace std;
struct Dog
{
public:
    void set(int newH,double newM=0.0,char newS[20]="0");
	void show(){
		cout<<age<<"-"<<weight<<"-"<<name<<endl;
	}
private:
    int age;double weight;char name[20];	
}
void Dog::set(int ageN;double weightN;char nameN[20]){
	age=newH;
	weight=newM;
	name=newS;
}
inline void Dog::show(){
		cout<<age<<"-"<<weight<<"-"<<name<<endl;
	}
int main()
{
	Dog mydog;
	cout<<"First set and output:"<<endl;
	mydog.set();
	mydog.show();
	cout<<"Second set and output:"<<endl;
	mydog.set(2,20.5,"daibi");
	mydog.show();
	return 0;
} 
