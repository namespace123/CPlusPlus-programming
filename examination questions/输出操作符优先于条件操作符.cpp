#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

inline void max_out( int val1, int val2 )
{
	cout << ( val1 > val2 ) ? val1 : val2;
	
	// Ӧ���������ţ� cout << (( val1 > val2 ) ? val1 : val2);
}
int main()
{
       	int ix = 10, jx = 20;
       	cout << "The larger of " << ix;
       	cout << ", " << jx << " is ";
	max_out( ix, jx );
	cout << endl;
}
