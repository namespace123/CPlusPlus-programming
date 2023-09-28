// ���ƹ��캯����ǳ�����Ƿǳ�Σ�յģ����׶�ͬһ���ڴ���ж���ͷ� 
//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//#include <vector>
//
//using namespace std;
//
//class Str{
//    public:
//    char *value;
//    Str(char s[])
//    {
//        cout<<"���ù��캯��..."<<endl;
//        int len = strlen(s);
//        value = new char[len + 1];
//        strcpy(value,s);
//    }
//    Str(Str &v)
//    {
//        cout<<"���ÿ������캯��..."<<endl;
//        this->value = v.value;
//    }
//    ~Str()
//    {
//        cout<<"������������..."<<endl;
//        if(value != NULL)
//            delete[] value;
//    }
//};
//
//int main()
//{
//
//    char s[] = "I love BIT";
//    Str *a = new Str(s);
//    Str *b = new Str(*a);
//    delete a;
//    cout<<"b�����е��ַ���Ϊ��"<<b->value<<endl;
//    delete b;
//    return 0;
//}


// ���ƹ��캯��������Ƚϰ�ȫ���������˷�ʱ����ռ� 
//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//#include <vector>
//
//using namespace std;
//
//class Str{
//    public:
//    char *value;
//    Str(char s[])
//    {
//        cout<<"���ù��캯��..."<<endl;
//        int len = strlen(s);
//        value = new char[len + 1];
//        strcpy(value,s);
//    }
//    Str(Str &v)
//    {
//        cout<<"���ÿ������캯��..."<<endl;
//        int len = strlen(v.value);
//        value = new char[len + 1];
//        strcpy(value,v.value);
//    }
//    ~Str()
//    {
//        cout<<"������������..."<<endl;
//        if(value != NULL)
//        {
//            delete[] value;
//            value = NULL;
//        }
//    }
//};
//
//int main()
//{
//
//    char s[] = "I love BIT";
//    Str *a = new Str(s);
//    Str *b = new Str(*a);
//    delete a;
//    cout<<"b�����е��ַ���Ϊ��"<<b->value<<endl;
//    delete b;
//    return 0;
//}



/*�ƶ����캯��������һ��ǰ���ǣ���a��ʼ��b��a���ǾͲ���Ҫ�ˣ�
 ��a->value�ÿռ��ɱ����ڴ�ռ䱻�ͷţ���Ϊ����ʱ�����ж��Ƿ�Ϊ�գ�����ǳ�ʼ����ɺ�ͽ�a������
 ���˵��������a��ʼ����b����Ҫ��a���в�����������ǳ�㸴�Ƶķ����Ͳ������ˡ�
 ע�⣺���ƹ��캯���Ĳ���������ֵ�����ƶ����캯���Ĳ���������ֵ����ֵ��Ϊ����ֵ�ͽ���ֵ��std::move���ɽ���ֵ��Ϊ����ֵ�� 
*/ 
//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//#include <vector>
//
//using namespace std;
//
//class Str{
//    public:
//    char *value;
//    Str(char s[])
//    {
//        cout<<"���ù��캯��..."<<endl;
//        int len = strlen(s);
//        value = new char[len + 1];
//        strcpy(value,s);
//    }
//    Str(Str &v)
//    {
//        cout<<"���ÿ������캯��..."<<endl;
//        this->value = v.value;
//        v.value = NULL;
//    }
//    ~Str()
//    {
//        cout<<"������������..."<<endl;
//        if(value != NULL)
//            delete[] value;
//    }
//};
//
//int main()
//{
//
//    char s[] = "I love BIT";
//    Str *a = new Str(s);
//    Str *b = new Str(*a);
//    cout<<"a�����е��ַ���Ϊ��"<<a->value<<endl;
//    delete a;
//    cout<<"b�����е��ַ���Ϊ��"<<b->value<<endl;
//    delete b;
//    return 0;
//}


#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
using namespace std;

class Str{
    public:
        char *str;
        Str(char value[])
        {
            cout<<"��ͨ���캯��..."<<endl;
            str = NULL;
            int len = strlen(value);
            str = (char *)malloc(len + 1);
            memset(str,0,len + 1);
            strcpy(str,value);
        }
        Str(const Str &s)
        {
            cout<<"�������캯��..."<<endl;
            str = NULL;
            int len = strlen(s.str);
            str = (char *)malloc(len + 1);
            memset(str,0,len + 1);
            strcpy(str,s.str);
        }
        Str(Str &&s)
        {
            cout<<"�ƶ����캯��..."<<endl;
            str = s.str;
            s.str = NULL;
        }
        ~Str()
        {
        	cout<<"��������"<<endl;
            if(str != NULL)
            {
            	cout<<"�ͷ��ڴ�ռ�"<<endl;
                free(str);
                str = NULL;
            }
        }
};
int main()
{
    char value[] = "I love zx";
    Str s(value);
    vector<Str> vs;
    vs.push_back(move(s));
//    vs.push_back(s);
    cout<<vs[0].str<<endl;
    if(s.str != NULL)
        cout<<s.str<<endl;
    return 0;
}
