#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    double a[] = {1.1234, 21.11, 322.123, 4321.666, 12345.1};
    for(int i = 0; i < 5; i++){
        // 需要头文件iomanip 
        // 设置宽度：这个设置只一次生效，所以每次循环都要执行 
        cout<<setw(10)<<a[i]<<endl;
    }
    cout<<endl; 
    
    for(int i = 0; i < 5; i++){
        // 设置宽度：这个设置只一次生效，所以每次循环都要执行 
        cout.width(10);
        cout<<a[i]<<endl;
    }
    cout<<endl; 
    
    // 需要头文件iomanip 
    // 设置左对齐：这个设置持久有效，除非后期改变 
    cout<<setiosflags(ios_base::left);
    for(int i = 0; i < 5; i++){
        cout<<a[i]<<endl;
    }
    cout<<endl; 
    
    // 单独用 setprecision,表示科学计数法 
    for(int i = 0; i < 5; i++){
        cout<<setw(10)<<setprecision(1)<<a[i]<<endl;
    }
    cout<<endl; 
    
    // 添加 fixed，表示小数点后面保留位数 
    cout<<setiosflags(ios_base::fixed);
    for(int i = 0; i < 5; i++){
        cout<<setw(10)<<setprecision(2)<<a[i]<<endl;
    }
    cout<<endl; 
    
    // 添加 scientific，也是科学计数法 
    cout<<setiosflags(ios_base::scientific);
    for(int i = 0; i < 5; i++){
        cout<<setw(10)<<setprecision(3)<<a[i]<<endl;
    }
    cout<<endl; 

    
	return 0;
}

