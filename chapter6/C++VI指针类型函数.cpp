#include <bits/stdc++.h>
using namespace std;

// 避免将局部非静态变量的地址作为函数返回值
// 指针类型的函数，应返回合法的有效地址
int main()
{
  int array[3] = {1, 2, 3};
  int* search(int* a, int num);
  int* z = search(array, 3);
  cout<<z<<endl;


  int* newintvar();
  int* intptr = newintvar();
  *intptr = 5;
  cout<<intptr<<endl;
  // 被调函数中返回的new出来的地址，主函数中不能忘记释放
  delete intptr;
  //  delete是释放空间，并不是删除指针 
  cout<<intptr<<endl;

  return 0;
}

// 子函数调用完成之后，数组依旧存在，因此所返回的地址也是有效的
int* search(int* a, int num)
{
  for(int i = 0; i < num; i++)
  {
    if(a[i] == 2)
    {
      return &a[i];
    }
  }
}

// 用new操作取得的内存空间，如若不释放就会一直存在，所以也是可以作为返回值的，但是在主调函数中要记得释放，否则会造成内存泄漏
int* newintvar()
{
  int* p = new int();
  return p;
}
