#include<iostream>
using namespace std;
class Cat 
{
public:
    Cat(int a);
    void numOfCat(int a);
    void getNumOfCat();
    ~Cat() {}
private:
    int num;	
};
Cat::Cat(int a)
{
	num=a;
}
void Cat::numOfCat(int a)
{
	num=a;
}
void Cat::getNumOfCat()
{
	cout<<"num="<<num<<endl;
}
int main()
{
	
    Cat c(0);
	c.getNumOfCat();
	c.numOfCat(6);
	c.getNumOfCat();
	return 0;
} 