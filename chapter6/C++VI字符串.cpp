#include <bits/stdc++.h>
using namespace std;

inline void test(const char *title, bool value)
{
  cout<<title<<" returns "<<(value?"true":"false")<<endl;
}

int main()
{
  // �ַ����Ƚϴ�С
  string s1 = "abc";
  string s2 = "cde";
  test("s1 >= s2", s1 >= s2);

  // �ַ�������
  s2 = s1 + s2;
  s2 += s1;
  cout<<s2<<endl;
  cout<<s2.length()<<endl;

  // ���������ַ���,�����ո�
  // getline�ĵ����������Ƿָ�����Ĭ��������Ϊ�ָ���
  // ����Beijing,China
  string city, state;
  getline(cin, city, ',');
  getline(cin, state);
  cout<<"City: "<<city<<", State: "<<state<<endl;
  
  
  
  
  
  
  
  
  
    char text[100] = "ABDSF";
//	gets(text);
	cout<<text<<" "<<sizeof(text)<<endl;  // 100
	// �ַ�����ת����string���͵����ַ�ʽ 
//	string str(text);
	string str = text;
	cout<<str<<" "<<str.length()<<endl;  // 5
  
  
  return 0;
}

