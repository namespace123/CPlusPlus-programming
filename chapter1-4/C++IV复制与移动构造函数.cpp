// 复制构造函数：浅拷贝是非常危险的，容易对同一块内存进行多次释放 
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
//        cout<<"调用构造函数..."<<endl;
//        int len = strlen(s);
//        value = new char[len + 1];
//        strcpy(value,s);
//    }
//    Str(Str &v)
//    {
//        cout<<"调用拷贝构造函数..."<<endl;
//        this->value = v.value;
//    }
//    ~Str()
//    {
//        cout<<"调用析构函数..."<<endl;
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
//    cout<<"b对象中的字符串为："<<b->value<<endl;
//    delete b;
//    return 0;
//}


// 复制构造函数：深拷贝比较安全，但是又浪费时间与空间 
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
//        cout<<"调用构造函数..."<<endl;
//        int len = strlen(s);
//        value = new char[len + 1];
//        strcpy(value,s);
//    }
//    Str(Str &v)
//    {
//        cout<<"调用拷贝构造函数..."<<endl;
//        int len = strlen(v.value);
//        value = new char[len + 1];
//        strcpy(value,v.value);
//    }
//    ~Str()
//    {
//        cout<<"调用析构函数..."<<endl;
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
//    cout<<"b对象中的字符串为："<<b->value<<endl;
//    delete b;
//    return 0;
//}



/*移动构造函数，但有一个前提是：用a初始化b后，a我们就不需要了，
 将a->value置空即可避免内存空间被释放（因为析构时会先判断是否为空）最好是初始化完成后就将a析构。
 如果说，我们用a初始化了b后，仍要对a进行操作，用这种浅层复制的方法就不合适了。
 注意：复制构造函数的参数需是左值，而移动构造函数的参数需是右值（右值分为纯右值和将亡值，std::move语句可将左值变为将亡值） 
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
//        cout<<"调用构造函数..."<<endl;
//        int len = strlen(s);
//        value = new char[len + 1];
//        strcpy(value,s);
//    }
//    Str(Str &v)
//    {
//        cout<<"调用拷贝构造函数..."<<endl;
//        this->value = v.value;
//        v.value = NULL;
//    }
//    ~Str()
//    {
//        cout<<"调用析构函数..."<<endl;
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
//    cout<<"a对象中的字符串为："<<a->value<<endl;
//    delete a;
//    cout<<"b对象中的字符串为："<<b->value<<endl;
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
            cout<<"普通构造函数..."<<endl;
            str = NULL;
            int len = strlen(value);
            str = (char *)malloc(len + 1);
            memset(str,0,len + 1);
            strcpy(str,value);
        }
        Str(const Str &s)
        {
            cout<<"拷贝构造函数..."<<endl;
            str = NULL;
            int len = strlen(s.str);
            str = (char *)malloc(len + 1);
            memset(str,0,len + 1);
            strcpy(str,s.str);
        }
        Str(Str &&s)
        {
            cout<<"移动构造函数..."<<endl;
            str = s.str;
            s.str = NULL;
        }
        ~Str()
        {
        	cout<<"析构函数"<<endl;
            if(str != NULL)
            {
            	cout<<"释放内存空间"<<endl;
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
