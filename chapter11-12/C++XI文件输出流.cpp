#include<fstream>
using namespace std;

struct Date{
    int mon, day, year;
};

int main(){

    Date dt = {6, 10, 92};
    ofstream file("data.dat", ios_base::binary);
    // ��ʱ��ָ�����ڶ���ĵ�ַ ת��Ϊ �ַ�ָ�� 
    file.write(reinterpret_cast<char *>(&dt), sizeof(dt));
    file.close();
	return 0;
}

