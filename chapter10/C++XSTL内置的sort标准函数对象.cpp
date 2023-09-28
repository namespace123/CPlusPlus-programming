#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
  int arr[] = {30, 90, 60, 40, 70};
  const int N = sizeof(arr) / sizeof(int);
  vector<int> a(arr, arr+N);
  copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
  cout<<endl;

  // 二元谓词对象sort，实现从大到小排序
  sort(a.begin(), a.end(), greater<int>());

  copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
  cout<<endl;
  return 0;
}

