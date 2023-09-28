#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int balancedString(string s) {
        unordered_map<int, int> count;
        for (auto c : s)
            count[c]++;

        int n = s.size();
        int k = n / 4;
        int res = n;

        for (int i = 0, j = 0; j < n; ++j) {
            count[s[j]]--;
            while (i < n && count['Q'] <= k && count['W'] <= k &&
                   count['E'] <= k && count['R'] <= k) {
                res = min(res, j - i + 1);
                count[s[i++]] += 1;
            }
        }

        return res;
    }
};

int main(){
    
    Solution sol; 
    cout<<sol.balancedString("QWER")<<endl;
    cout<<sol.balancedString("QQWE")<<endl;
    cout<<sol.balancedString("QQQW")<<endl;
    cout<<sol.balancedString("QQQQ")<<endl; 
    cout<<sol.balancedString("WWEQERQWQWWRWWERQWEQ")<<endl;

	return 0;
}

