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
    // ����Ĭ�Ϸ�����ȥ�أ�ֱ��ȥ�ؿ��ܴﲻ�����Ч�� 
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
    
    // ���� ���� �� unique ������ϵķ�ʽ��ȥ��Ч������ 
  const char init[] = "The Standard Template Library";
  vector<char> V(init, init + sizeof(init));
  // ����sort�������� 
  sort(V.begin(), V.end(), lt_nocase);
  copy(V.begin(), V.end(), ostream_iterator<char>(cout));
  cout << endl;
  // ����ȥ�أ������Զ���ķ��������Դ�Сд���� 
  vector<char>::iterator new_end = unique(V.begin(), V.end(), eq_nocase);
  copy(V.begin(), new_end, ostream_iterator<char>(cout));
  cout << endl;
  cout << endl;
  
  
  // ȥ�سɹ����������Ԫ�����ɻ��� 
   copy(V.begin(), V.end(), ostream_iterator<char>(cout));
   cout << endl;
   // ɾ������
   V.erase(new_end, V.end());
   copy(V.begin(), V.end(), ostream_iterator<char>(cout));
   cout << endl;
   cout << endl;
   
   // ����:list.unique�����ǿ��Լ����������ȵ� 
   int a[] = {1, 1, 4, 5, 5, 4, 5};
   list<int> s(a, a + 7);
   s.unique();
   copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
}
