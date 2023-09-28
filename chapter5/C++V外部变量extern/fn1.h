// extern声明并非定义，也不分配内存空间
// 一个文件定义了变量，则其他文件则只能声明
extern int n;

void fn1()
{
//  cout<<"n = "<<n;
  n = 30;
}
