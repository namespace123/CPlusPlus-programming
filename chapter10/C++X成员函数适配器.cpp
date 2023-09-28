#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;

struct Car{
	int id;
	Car(int id){
		this->id = id;
	}
	void display() const{
		cout<<"car"<<id<<endl;
	}
};
int main(){
	// 存放对象指针 
	vector<Car *> pcars;
	// 存放对象 
	vector<Car> cars;
	for(int i = 0; i < 5; i++){
		pcars.push_back(new Car(i));
	} 
	for(int i = 5; i < 10; i++){
		cars.push_back(Car(i));
	} 
	cout<<"element in pcars: "<<endl;
	// mem_fun:将成员函数适配成普通的函数对象, 参数为对象的指针 
	for_each(pcars.begin(), pcars.end(), std::mem_fun(&Car::display));
	cout<<endl; 
	cout<<"element in cars: "<<endl;
	// mem_fun_ref:将成员函数适配成普通的函数对象，参数为对象的引用 
	for_each(cars.begin(), cars.end(), std::mem_fun_ref(&Car::display));
	cout<<endl; 
	
	for(size_t i = 0; i < pcars.size(); ++i){
		delete pcars[i];
	}
	return 0;
}

