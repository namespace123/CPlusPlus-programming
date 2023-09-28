#include <iostream>
using namespace std;
template<class T>   
T max(T a,T b)  
{
   if(b>a) return b;
   else return a;
}

int main( )
{
   int i1=1,i2=2,i3=3,i;
   double d1=1.0,d2=2.0,d3=3.0,d;
   long g1=1,g2=2,g3=3,g;
   i=max(i1,i2);  
   d=max(d1,d2);  
   g=max(g1,g2);  
   cout <<i<<endl;
   cout <<d<<endl;
   cout <<g<<endl;
   return 0;
}
