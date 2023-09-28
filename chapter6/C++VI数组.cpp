#include <bits/stdc++.h>
using namespace std;


void rowSum(int a[][4], int nRow)
{
  for(int i = 0; i < nRow; i++)
  {
    for(int j = 1; j < 4; j++)
    {
      a[i][0] += a[i][j];
    }
  }
}



void swap(int &a, int &b)
{
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
}


int main()
{
//  int * a = new int[5];
//  for(int i = 0; i < 5; i++)
//  {
//    cout<<"please input a number: ";
//    cin>>a[i];
//  }
//  for(int i = 0; i < 5; i++)
//  {
//    cout<<a[i]<<" ";
//  }
//  cout<<endl;




  double * counter;
  // 指针占了多少字节
  // 指针所指的变量占了多少字节  
  cout<<sizeof(counter)<<", "<<sizeof(*counter)<<endl;// 4   8
  
  
  
  
  
  // 二维数组做参数
//  int table[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}};
//  for(int i = 0; i < 3; i++)
//  {
//    for(int j = 0; j < 4; j++)
//    {
//      cout<<setw(3)<<table[i][j];
//    }
//    cout<<endl;
//  }
//  rowSum(table, 3);
//  for(int i = 0; i < 3; i++)
//  {
//    for(int j = 0; j < 4; j++)
//    {
//      cout<<setw(3)<<table[i][j];
//    }
//    cout<<endl;
//  } 





// 数组转置 
//  int **a;
//  a = new int*[3];
//  for(int i = 0; i < 3; i++)
//  {
//    a[i] = new int[3];
//  }
//  for(int i = 0; i < 3; i++)
//  {
//    for(int j = 0; j < 3; j++)
//    {
//      a[i][j] = i * 10 + j;
//    }
//  }
//  cout<<"初始数组为："<<endl;
//  for(int i = 0; i < 3; i++)
//  {
//    for(int j = 0; j < 3; j++)
//    {
//      cout<<a[i][j]<<" ";
//    }
//    cout<<endl;
//  }
//
//  for(int i = 0; i < 3; i++)
//  {
//    for(int j = 0; j < i; j++)
//    {
//      swap(a[i][j], a[j][i]);
//    }
//    cout<<endl;
//  }
//
//  cout<<"转置数组为："<<endl;
//  for(int i = 0; i < 3; i++)
//  {
//    for(int j = 0; j < 3; j++)
//    {
//      cout<<a[i][j]<<" ";
//    }
//    cout<<endl;
//  }

  
  
  
  return 0;
}

