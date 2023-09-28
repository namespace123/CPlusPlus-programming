#include<iostream>
using namespace std;

struct ss{
    int a;
    int b;
};


int main(){
    
    // 构造对象 
    ss s = {1, 2};  // or ss s = new ss();  s.a = 1; s.b = 2
    // 这里是深拷贝（就像克隆一样，从头到脚克隆出来一模一样的动物，然而它们并不是同一个个体） 
    ss s2 = s; 
    s2.a = 3;
    s2.b = 4;
    // 将 s 赋值给 s2 ，改变 s2 的值之后，发现 s 的值并没有改变，所以这里的赋值显然是 深拷贝 
    cout<<s.a<<", "<<s.b<<endl;   // 结果是   1, 2 
    
    
    // 此处为浅拷贝，原理是将 s 的地址赋值给 s3，当改变 s3地址所对应的值时，s 的值自然也变了 
    // 浅拷贝就像 你给宠物起的名字，你一会叫它 小宝，一会儿叫他 baby，但指的是同一个个体，你喂小宝，就是在喂baby 
    ss *s3 = &s; 
    s3->a = 3;
    s3->b = 4;
    cout<<s.a<<", "<<s.b<<endl;   // 结果是   3, 4
    
    
    
    
    
    // 哪怕是一向以引用类型自居的string，它也是通过指针才能实现浅拷贝 
    string a = "asd";
    string b = a;
    b = "gkhj";
    cout<<a<<endl;  // 结果是 asd
    
    string *c = &a;
    *c = "gkhj";
    cout<<a<<endl;  // 结果是 gkhj

	return 0;
}

