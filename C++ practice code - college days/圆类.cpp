#include<iostream>
#define IP 3.1415
using namespace std;
class SimpleCircle
{
public:
    SimpleCircle(int a);
    void circle(int a);
    void show();
    ~SimpleCircle() {}
private:
    int itsRadius;  
};
SimpleCircle::SimpleCircle(int a){
	itsRadius=a;
}
void SimpleCircle::circle(int a){
    itsRadius=a;
}
void SimpleCircle::show(){
	double s=IP*itsRadius*itsRadius;
	cout<<"此圆面积为"<<s<<endl;
}
int main()
{
	SimpleCircle c(0);
	c.show();
	c.circle(1);
	c.show();
    return 0;
}