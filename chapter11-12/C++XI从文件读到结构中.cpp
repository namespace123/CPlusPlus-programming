#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct SalaryInfo{
    unsigned id;
    double salary;
};

int main(){
    // 将结构体写入文件 
    SalaryInfo employee1 = {600001, 8000};
    ofstream os("payroll", ios_base::out | ios_base::binary);
    os.write(reinterpret_cast<char *>(&employee1), sizeof(employee1));
    os.close();
    
    // 从文件中读出结构体 
    ifstream is("payroll", ios_base::out | ios_base::binary);
    if(is){
        SalaryInfo employee2;
        is.read(reinterpret_cast<char *>(&employee2), sizeof(employee2));
        cout<<employee2.id<<", "<<employee2.salary<<endl;
    }else{
        cout<<"error"<<endl;
    }
    is.close();
	return 0;
}

