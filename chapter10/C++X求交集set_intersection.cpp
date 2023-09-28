#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

// 这里是自定义的比较方法，这里自定义的 < 操作符，所以数据应有的序列应该是由小到大 
inline bool lt_nocase(char c1, char c2) { 
    return tolower(c1) < tolower(c2); 
}

int main()
{
    // 这些序列都必须是有序的，按照默认或自定义的比较规则来排序的 
  int A1[] = {1, 3, 5, 7, 9, 11};
  int A2[] = {1, 1, 2, 3, 5, 8, 13};  
  // 这里我稍作了修改，后面你可以看到，从大小写可以看出，取交集的结果是复制于A3而不是A4，set_intersection的稳定性就表现在这里 
  char A3[] = {'a', 'B', 'b', 'B', 'B', 'f', 'h', 'H'};
  char A4[] = {'A', 'B', 'B', 'C', 'D', 'F', 'F', 'H' };

  const int N1 = sizeof(A1) / sizeof(int);
  const int N2 = sizeof(A2) / sizeof(int); 
  const int N3 = sizeof(A3);
  const int N4 = sizeof(A4);

 // 这里调用了 set_intersection 的两种比较方式 
  cout << "Intersection of A1 and A2: ";
  set_intersection(A1, A1 + N1, A2, A2 + N2, ostream_iterator<int>(cout, " "));
  cout << endl << "Intersection of A3 and A4: ";
  set_intersection(A3, A3 + N3, A4, A4 + N4, ostream_iterator<char>(cout, " "), lt_nocase);
  cout << endl;
  
  /*如果数组不是有序的，会出现大问题，A5第一个数是12，比 A6 的所有元素都大
   而且STL是默认为序列从小到大排序的，所以自然不会再去比较 A5 中的其他元素，所以返回的交集为空 */
   int A5[] = {12, 1, 3, 5, 7, 9};
  int A6[] = {1, 1, 2, 3, 5, 8, 11};  
  cout << "Intersection of A5 and A6: ";
  set_intersection(A5, A5 + N1, A6, A6 + N2, ostream_iterator<int>(cout, " "));
} 
