#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector> 
#include<list>
using namespace std;

inline bool eq_nocase(char c1, char c2) { return tolower(c1) == tolower(c2); }
inline bool lt_nocase(char c1, char c2) { return tolower(c1) < tolower(c2); }

int main()
{
    // 运用默认方法来去重，直接去重可能达不到最佳效果 
    vector<int> V1;
    V1.push_back(1);
    V1.push_back(3);
    V1.push_back(3);
    V1.push_back(3);
    V1.push_back(2);
    V1.push_back(2);
    V1.push_back(1);
    vector<int>::iterator new_end1 = unique(V1.begin(), V1.end());
    copy(V1.begin(), new_end1, ostream_iterator<int>(cout, " "));
    cout<<endl; 
    cout << endl;
    
    // 采用 排序 与 unique 方法结合的方式，去重效果更佳 
  const char init[] = "The Standard Template Library";
  vector<char> V(init, init + sizeof(init));
  // 调用sort进行排序 
  sort(V.begin(), V.end(), lt_nocase);
  copy(V.begin(), V.end(), ostream_iterator<char>(cout));
  cout << endl;
  // 进行去重，运用自定义的方法来忽略大小写问题 
  vector<char>::iterator new_end = unique(V.begin(), V.end(), eq_nocase);
  copy(V.begin(), new_end, ostream_iterator<char>(cout));
  cout << endl;
  cout << endl;
  
  
  // 去重成功，但后面的元素依旧还在 
   copy(V.begin(), V.end(), ostream_iterator<char>(cout));
   cout << endl;
   // 删除它们
   V.erase(new_end, V.end());
   copy(V.begin(), V.end(), ostream_iterator<char>(cout));
   cout << endl;
   cout << endl;
   
   // 补充:list.unique方法是可以减少容器长度的 
   int a[] = {1, 1, 4, 5, 5, 4, 5};
   list<int> s(a, a + 7);
   s.unique();
   copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
}
