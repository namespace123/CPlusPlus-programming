# include <iostream>
# include <assert.h>
using namespace std;

int main(){
	int z = 20;
	assert(z < 25);
	cout<<"fighting!"<<endl;
	assert(z > 25); // ��������ڵı��ʽ����������ֱ�ӷ��ش���ʡȥ��if else���鷳 
	cout<<"not fighting!"<<endl;
	return 0;
}

