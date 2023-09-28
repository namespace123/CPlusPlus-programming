#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    double a[] = {1.1234, 21.11, 322.123, 4321.666, 12345.1};
    for(int i = 0; i < 5; i++){
        // ��Ҫͷ�ļ�iomanip 
        // ���ÿ�ȣ��������ֻһ����Ч������ÿ��ѭ����Ҫִ�� 
        cout<<setw(10)<<a[i]<<endl;
    }
    cout<<endl; 
    
    for(int i = 0; i < 5; i++){
        // ���ÿ�ȣ��������ֻһ����Ч������ÿ��ѭ����Ҫִ�� 
        cout.width(10);
        cout<<a[i]<<endl;
    }
    cout<<endl; 
    
    // ��Ҫͷ�ļ�iomanip 
    // ��������룺������ó־���Ч�����Ǻ��ڸı� 
    cout<<setiosflags(ios_base::left);
    for(int i = 0; i < 5; i++){
        cout<<a[i]<<endl;
    }
    cout<<endl; 
    
    // ������ setprecision,��ʾ��ѧ������ 
    for(int i = 0; i < 5; i++){
        cout<<setw(10)<<setprecision(1)<<a[i]<<endl;
    }
    cout<<endl; 
    
    // ��� fixed����ʾС������汣��λ�� 
    cout<<setiosflags(ios_base::fixed);
    for(int i = 0; i < 5; i++){
        cout<<setw(10)<<setprecision(2)<<a[i]<<endl;
    }
    cout<<endl; 
    
    // ��� scientific��Ҳ�ǿ�ѧ������ 
    cout<<setiosflags(ios_base::scientific);
    for(int i = 0; i < 5; i++){
        cout<<setw(10)<<setprecision(3)<<a[i]<<endl;
    }
    cout<<endl; 

    
	return 0;
}

