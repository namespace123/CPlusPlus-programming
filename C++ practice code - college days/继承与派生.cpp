#include<iostream>
using namespace std;
struct Base1 {int x;};
struct Base2 {int y;};
struct Derive:Base1,Base2{};
int main()
{
	Derive *pd=new Derive ;
	pd->x=1;pd->y=2.0f;
	void *pv=pd;
	Base2 *pb=static_cast<Base2*>(pv);
	cout<<pd->y<<" "<<pb->y<<endl;
	delete pb;
	return 0;
}
