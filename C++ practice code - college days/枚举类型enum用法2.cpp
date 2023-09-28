#include <iostream>
using namespace std;
int main()
{
	enum Day{MON,TUE=5,WED,THU,FRI=2} ; 
	cout<<MON<<" "<<TUE<<" "<<WED<<" "<<THU<<" "<<FRI<<endl;                                                                                          
	return 0;
}