#include<fstream>
using namespace std;

struct Date{
    int mon, day, year;
};

int main(){

    Date dt = {6, 10, 92};
    ofstream file("data.dat", ios_base::binary);
    // 临时将指向日期对象的地址 转换为 字符指针 
    file.write(reinterpret_cast<char *>(&dt), sizeof(dt));
    file.close();
	return 0;
}

