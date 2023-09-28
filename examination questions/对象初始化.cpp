#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct CLS
{
    int m_i;
    CLS( int i ) : m_i(i) {}
    CLS()
    {
        m_i = 5;    // CLS(5);  这样写则不行 
        
    }
};

int main(){
	
	CLS obj;
	cout << obj.m_i << endl;
}

