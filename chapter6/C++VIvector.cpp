#include <bits/stdc++.h>
using namespace std;

// vector 的size可以判断大小
double average(const vector<double> &arr)
{
  double sum = 0;
  for(unsigned i = 0; i < arr.size(); i++)
  {
    sum += arr[i];
  }
  return sum / arr.size();
}

int main()
{
//  int n;
//  cin>>n;
//  vector<double> arr(n);
//  for(int i = 0; i < n; i++)
//  {
//    cin>>arr[i];
//  }
//  cout<<average(arr)<<endl;


  // 基于范围的for循环配合auto举例
  vector<int> v = {1, 2, 3};
  v.push_back(4);
  for(auto i = v.begin(); i != v.end(); ++i)
  {
    cout<<*i<<endl;
  }
  for(auto e : v)
  {
    cout<<e<<endl;
  }
  return 0;
}

