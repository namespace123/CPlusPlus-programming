#include <bits/stdc++.h>
using namespace std;

inline void test(const char *title, bool value)
{
  cout<<title<<" returns "<<(value?"true":"false")<<endl;
}

int main()
{
  // 字符串比较大小
  string s1 = "abc";
  string s2 = "cde";
  test("s1 >= s2", s1 >= s2);

  // 字符串连接
  s2 = s1 + s2;
  s2 += s1;
  cout<<s2<<endl;
  cout<<s2.length()<<endl;

  // 输入整行字符串,包括空格
  // getline的第三个参数是分隔符，默认是以行为分隔符
  // 输入Beijing,China
  string city, state;
  getline(cin, city, ',');
  getline(cin, state);
  cout<<"City: "<<city<<", State: "<<state<<endl;
  
  
  
  
  
  
  
  
  
    char text[100] = "ABDSF";
//	gets(text);
	cout<<text<<" "<<sizeof(text)<<endl;  // 100
	// 字符数组转化成string类型的两种方式 
//	string str(text);
	string str = text;
	cout<<str<<" "<<str.length()<<endl;  // 5
  
  
  return 0;
}

