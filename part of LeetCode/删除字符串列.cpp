#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        // ��ÿһ�н���ð������
        // ð������ʱ����в�����˳��ģ���ֱ��breakbreak������n++
        int n = 0;
        // �˴��������� sizeof(A)/sizeof(A[0]),��Ϊvector��sizeof�Ƚ����⣬���ɼ���Ԫ�ظ���
        int row = A.size();   // ���򳤶�
        int col = A[0].length();
        for(int k = 0; k < col; k++){
            bool flag = false;
            for(int i = 0; i < row - 1; i++){
                for(int j = 0; j < row - i - 1; j++){
                    if(A[j][k] > A[j+1][k]){
                        flag = true;
                        break;
                    }
                }
                if(flag){
                    break;
                }
            }
            if(flag){
                n++;
            }
        }
        return n;
    }
};

int main(){

    Solution sol;
    vector<string> v;
    v.push_back("cba");
    v.push_back("daf");
    v.push_back("ghi");
    cout<<sol.minDeletionSize(v)<<endl;
    
    vector<string> v2;
    v2.push_back("a");
    v2.push_back("b");
    cout<<sol.minDeletionSize(v2)<<endl;
    
    vector<string> v3;
    v3.push_back("zyx");
    v3.push_back("wvu");
    v3.push_back("tsr");
    cout<<sol.minDeletionSize(v3)<<endl;
    
	return 0;
}

